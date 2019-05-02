#include "udp_client.h"

UDP_Client::UDP_Client(quint16 port, quint16 sending_port, QHostAddress sending_address,
                       QString content, bool send_file, bool single_message, QObject *parent) : UDP(port, parent)
{
    _sending_port = sending_port;
    _sending_address = sending_address;
    _content = content;
    _send_file = send_file;
    _single_message = single_message;

    start();
}

UDP_Client::~UDP_Client()
{
    qDebug() << "Shutting down client...";
}

void UDP_Client::start()
{
    qDebug() << "\nStarting client...";
    qDebug() << "Local Port: " << _port;
    qDebug() << "Sending Port: " << _sending_port;
    qDebug() << "Sending Address" << _sending_address.toString() << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    do
    {
        send();
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    } while(!_single_message);
}

void UDP_Client::send()
{
    if(_send_file)
        send_file();
    else
        send_message();
}

void UDP_Client::send_message()
{
    QByteArray data;
    QString next_msg = _content;
    data.append(next_msg);
    _socket->writeDatagram(data, _sending_address, _sending_port);
    qDebug() << "Message sent!";
    qDebug() << "Message: " << next_msg;
    qDebug() << "Address: " << _sending_address.toString();
    qDebug() << "Port: " << _sending_port << "\n";
}

void UDP_Client::send_file()
{
    qDebug() << "File name: ";
    QString filename = _content;
    qDebug() << filename;
    QFile file(filename);
    if(!file.exists())
    {
        qDebug() << "File doesn't exist";
        return;
    }

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Error opening file";
        qDebug() << file.error();
        return;
    }

    qDebug() << "File opened!";

    QByteArray data = file.readAll();
    if(data.size() > 8192)
    {
        qDebug() << "File too big";
        return;
    }

    _socket->writeDatagram(data, _sending_address, _sending_port);

    file.close();
}
