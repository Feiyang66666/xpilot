#ifndef INSTALLMODELS_H
#define INSTALLMODELS_H

#include <QObject>
#include <QString>
#include <QThread>
#include <QNetworkAccessManager>
#include <QtPromise>
#include <QSaveFile>

class InstallModels : public QObject
{
    Q_OBJECT

public:
    InstallModels(QObject *parent = nullptr);
    ~InstallModels();

    QtPromise::QPromise<QString> GetAuthToken();
    QtPromise::QPromise<QString> ValidateAuthToken(const QString& token);
    QtPromise::QPromise<void> DownloadModels(const QString& url);
    QtPromise::QPromise<void> UnzipModels(const QString &path);
    void CreatePluginConfig(const QString &path);
    void DeleteTempDownload();
    Q_INVOKABLE void downloadModels();
    Q_INVOKABLE void validatePath(const QString path);
    Q_INVOKABLE void cancel();

signals:
    void downloadProgressChanged(double value);
    void setXplanePath();
    void invalidXplanePath(QString errorText);
    void validXplanePath();
    void unzipProgressChanged(double value);
    void unzipFinished();
    void errorEncountered(QString error);
    void tokenValidationError(QString error);
    void downloadStarted();

private:
    QNetworkAccessManager *nam = nullptr;
    QPointer<QNetworkReply> m_reply = nullptr;
    QPointer<QSaveFile> m_file = nullptr;
    bool m_stopExtract = false;
};

#endif // INSTALLMODELS_H
