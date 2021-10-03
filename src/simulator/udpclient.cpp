#include "udpclient.h"

#include <QTimer>
#include <QtEndian>

enum DataRef
{
    AvionicsPower,
    AudioComSelection,
    Com1AudioSelection,
    Com2AudioSelection,
    Com1Frequency,
    Com2Frequency
};

UdpClient::UdpClient(QObject* parent) : QObject(parent)
{
    socket = new QUdpSocket(this);
    connect(socket, &QUdpSocket::readyRead, this, &UdpClient::OnDataReceived);

    subscribeDataRef("sim/cockpit2/switches/avionics_power_on", DataRef::AvionicsPower, 5);
    subscribeDataRef("sim/cockpit2/radios/actuators/audio_com_selection", DataRef::AudioComSelection, 5);
    subscribeDataRef("sim/cockpit2/radios/actuators/audio_selection_com1", DataRef::Com1AudioSelection, 5);
    subscribeDataRef("sim/cockpit2/radios/actuators/audio_selection_com2", DataRef::Com2AudioSelection, 5);
    subscribeDataRef("sim/cockpit2/radios/actuators/com1_frequency_hz_833", DataRef::Com1Frequency, 5);
    subscribeDataRef("sim/cockpit2/radios/actuators/com2_frequency_hz_833", DataRef::Com2Frequency, 5);
}

void UdpClient::subscribeDataRef(std::string dataRef, uint32_t id, uint32_t frequency)
{
    QByteArray data;

    data.fill(0, 413);
    data.insert(0, "RREF");
    data.insert(5, (const char*)&frequency);
    data.insert(9, (const char*)&id);
    data.insert(13, dataRef.c_str());
    data.resize(413);

    socket->writeDatagram(data.data(), data.size(), QHostAddress::LocalHost, 49000);
}

void UdpClient::OnDataReceived()
{
    while(socket->hasPendingDatagrams())
    {
        QByteArray buffer;

        buffer.resize(socket->pendingDatagramSize());
        socket->readDatagram(buffer.data(), buffer.size());

        int pos = 0;
        QString header = QString::fromUtf8(buffer.mid(pos, 4));
        pos += 5;

        if(header == "RREF")
        {
            while(pos < buffer.length())
            {
                qint32 id = qFromLittleEndian<qint32>(buffer.mid(pos, 4).data());
                pos += 4;

                float value = qFromLittleEndian<float>(buffer.mid(pos, 4).data());
                pos += 4;

                switch(id) {
                case DataRef::AvionicsPower:
                    if(m_avionicsPower != value) {
                        emit avionicsPowerOnChanged(value);
                        m_avionicsPower = value;
                    }
                    break;
                case DataRef::AudioComSelection:
                    if(m_audioComSelection != value) {
                        emit audioComSelectionChanged(value);
                        m_audioComSelection = value;
                    }
                    break;
                case DataRef::Com1AudioSelection:
                    if(m_com1AudioSelection != value) {
                        emit com1AudioSelectionChanged(value);
                        m_com1AudioSelection = value;
                    }
                    break;
                case DataRef::Com2AudioSelection:
                    if(m_com2AudioSelection != value) {
                        emit com2AudioSelectionChanged(value);
                        m_com2AudioSelection = value;
                    }
                    break;
                case DataRef::Com1Frequency:
                    if(m_com1Frequency != value) {
                        emit com1FrequencyChanged(value * 1000);
                        m_com1Frequency = value * 1000;
                    }
                    break;
                case DataRef::Com2Frequency:
                    if(m_com1Frequency != value) {
                        emit com2FrequencyChanged(value * 1000);
                        m_com2Frequency = value * 1000;
                    }
                    break;
                }
            }
        }
    }
}