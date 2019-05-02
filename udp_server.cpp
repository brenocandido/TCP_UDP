#include "udp_server.h"

UDP_Server::UDP_Server(quint16 port, QObject *parent): UDP(port, parent), loop(this)
{
    connect(_socket, SIGNAL(readyRead()), &loop, SLOT(quit()));
}

UDP_Server::~UDP_Server()
{
    qDebug() << "Shutting down server...";
}

void UDP_Server::start()
{
    qDebug() << "Starting server...";
    qDebug() << "Port: " << _port << "\n";

    while(1)
    {
        loop.exec();            // Loops while waiting for a message
        receive();
    }
}

void UDP_Server::start_server()
{
    start();
}

QByteArray UDP_Server::getData()
{
    return _message;
}

void UDP_Server::receive()
{
    QByteArray buffer;
    buffer.resize(_socket->pendingDatagramSize());

    QHostAddress sender;
    quint16 senderPort;

    _socket->readDatagram(buffer.data(), buffer.size(), &sender, &senderPort);
    _message = buffer;

    emit(message_received());

    qDebug() << "Message from: " << sender.toString();
    qDebug() << "Message port: " << senderPort;
    qDebug() << "Message: " << buffer << "\n";
}
