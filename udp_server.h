#ifndef UDP_SERVER_H
#define UDP_SERVER_H

#include <QObject>
#include <QEventLoop>
#include "udp.h"

class UDP_Server: public UDP
{
    Q_OBJECT
public:
    explicit UDP_Server(quint16 port, QObject *parent = nullptr);
    virtual ~UDP_Server();
    virtual void start() override;
    void receive();

public slots:
    void start_server();
    QByteArray getData();

signals:


private:
    QEventLoop loop;
    QByteArray _message;
};

#endif // UDP_SERVER_H
