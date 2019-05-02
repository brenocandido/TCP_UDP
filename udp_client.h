#ifndef UDP_CLIENT_H
#define UDP_CLIENT_H

#include <QObject>
#include <QString>
#include <QFile>
#include <QCoreApplication>
#include <thread>
#include <chrono>
#include "udp.h"

class UDP_Client final: public UDP
{
public:
    explicit UDP_Client(quint16 local_port, quint16 sending_port, QHostAddress sending_address = QHostAddress::LocalHost,
                        QString content = "Test", bool send_file = false, bool single_message = false, QObject *parent = nullptr);
    virtual ~UDP_Client();
    virtual void start() override;

private:
    void send();
    void send_message();
    void send_file();

    quint16 _sending_port;
    QHostAddress _sending_address;
    QString _content;
    int _msgCount = 0;
    bool _single_message;
    bool _send_file;
};

#endif // UDP_CLIENT_H
