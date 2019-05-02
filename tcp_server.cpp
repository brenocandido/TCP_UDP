#include "tcp_server.h"

TCP_Server::TCP_Server(quint16 port, QObject *parent) : QObject(parent)
{
    _port = port;
    _server = new QTcpServer();
    connect(_server, SIGNAL(newConnection()), this, SLOT(newConnection()));
}

void TCP_Server::newConnection()
{
    qDebug() << "New connection";

    QTcpSocket *socket = _server->nextPendingConnection();
    socket->waitForReadyRead();
    _data = socket->read(8192);
    qDebug() << _data;
    emit messageReceived();
}

void TCP_Server::start_server()
{
    start();
}

void TCP_Server::start()
{
    if(!_server->listen(QHostAddress::Any, _port))
    {
        qDebug() << "Server could not start";
    }
    else
    {
        qDebug() << "Server started";
    }

    while(1)
    {
        _server->waitForNewConnection();
    }
}

QByteArray TCP_Server::getData()
{
    return _data;
}


