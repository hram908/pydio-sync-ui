#ifndef HTTPPOLLER_H
#define HTTPPOLLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include <job.h>
#include <QHash>

class HTTPPoller : public QObject
{
    Q_OBJECT
public:
    explicit HTTPPoller(QObject *parent = 0);
    void setUrl(QUrl&);

signals:
   void requestFinished();
   void newJob(QString, QString);
   void jobUpdated(QString, QString);
   void jobDeleted(QString);

public slots:
    void poll();
    void pollingFinished(QNetworkReply*);

private:
    QNetworkAccessManager *manager;
    QUrl serverUrl;
    QHash<QString, Job*> *jobs;

};

#endif // HTTPPOLLER_H