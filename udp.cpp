#include "udp.h"

UDP::UDP(quint16 port, QObject *parent) : QObject(parent)
{
    _port = port;
    _socket = new QUdpSocket(this);
    _socket->bind(QHostAddress::Any, _port);
}
