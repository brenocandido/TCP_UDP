#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QThread>

class TCP_Server : public QObject
{
    Q_OBJECT
public:
    explicit TCP_Server(quint16 port, QObject *parent = 0);
    QByteArray getData();
    void start();

signals:
    void messageReceived();

public slots:
    void newConnection();
    void start_server();

private:

    QTcpServer *_server;
    QByteArray _data;
    quint16 _port;
};

#endif // TCP_SERVER_H
