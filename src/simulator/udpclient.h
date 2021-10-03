#ifndef UDPCLIENT_H
#define UDPCLIENT_H

#include <map>
#include <string>
#include <cstdint>
#include <list>
#include <functional>
#include <string>
#include <mutex>
#include <vector>

#include <QObject>
#include <QUdpSocket>
#include <QDataStream>

class UdpClient : public QObject
{
    Q_OBJECT

public:
    UdpClient(QObject* parent = nullptr);
    void subscribeDataRef(std::string dataRef, uint32_t id, uint32_t frequency);

public slots:
    void OnDataReceived();

signals:
    void avionicsPowerOnChanged(bool power);
    void audioComSelectionChanged(int radio);
    void com1AudioSelectionChanged(bool active);
    void com2AudioSelectionChanged(bool active);
    void com1FrequencyChanged(float freq);
    void com2FrequencyChanged(float freq);

private:
    QUdpSocket* socket;

    bool m_avionicsPower;
    int m_audioComSelection;
    bool m_com1AudioSelection;
    bool m_com2AudioSelection;
    float m_com1Frequency;
    float m_com2Frequency;
};

#endif
