#ifndef UDP_SERVER_H
#define UDP_SERVER_H

#include <QObject>
#include <QEventLoop>
#include "udp.h"

class UDP_Server final: public UDP
{
public:
    explicit UDP_Server(quint16 port, QObject *parent = nullptr);
    virtual ~UDP_Server();
    virtual void start() override;

private:
    void recieve();

    QEventLoop loop;
};

#endif // UDP_SERVER_H
