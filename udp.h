#ifndef UDP_H
#define UDP_H

#include <QObject>
#include <QUdpSocket>
#include <QTimer>
#include <QString>
#include <QEventLoop>
#include <thread>
#include <chrono>

class UDP : public QObject
{
    Q_OBJECT
public:
    explicit UDP(quint16 port,QObject *parent = nullptr);
    virtual ~UDP() {}
    virtual void start() = 0;

signals:
    void message_received();


protected:
    QUdpSocket *_socket;
    quint16 _port;

signals:

public slots:
};

#endif // UDP_H
