#ifndef TCP_CLIENT_H
#define TCP_CLIENT_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class TCP_Client : public QObject
{
    Q_OBJECT
public:
    explicit TCP_Client(quint16 destination_port, QHostAddress destination_ip, QString message, QObject *parent = 0);
    void start();
private:

    quint16 _destination_port;
    QHostAddress _destination_ip;
    QString _message;
    QTcpSocket _socket;

signals:

public slots:
    void start_client();
};

#endif // TCP_CLIENT_H
