#include "tcp_client.h"

TCP_Client::TCP_Client(quint16 destination_port, QHostAddress destination_ip, QString message, QObject *parent) : QObject(parent)
{
    _destination_port = destination_port;
    _destination_ip = destination_ip;
    _message = message;
}

void TCP_Client::start()
{
    qDebug() << "Starting client";
    qDebug() << "Receiver IP: " << _destination_ip;
    qDebug() << "Receiver port: " << _destination_port << endl;
    _socket.connectToHost(_destination_ip, _destination_port);

    if(_socket.waitForConnected())
    {
        QByteArray data;
        data.append(_message);
        _socket.write(data);
        _socket.waitForBytesWritten();
        _socket.flush();
        _socket.close();
        qDebug() << "Finishing client";
    }
}

void TCP_Client::start_client()
{
    start();
}


