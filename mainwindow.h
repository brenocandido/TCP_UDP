#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHostAddress>
#include <QThread>
#include <QDebug>
#include "udp_client.h"
#include "udp_server.h"
#include "tcp_client.h"
#include "tcp_server.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    enum protocol{
        UDP,
        TCP,
        None
    };

public slots:
    void udpSelected();
    void tcpSelected();

    void clientSend();
    void serverListen();

    void serverMessageReceived();
private:

    Ui::MainWindow *ui;
    protocol _protocol = None;

    UDP_Client *_udp_client;
    UDP_Server *_udp_server;

    TCP_Client *_tcp_client;
    TCP_Server *_tcp_server;

    QThread _clientThread;
    QThread _serverThread;

    void setupConnections();
};

#endif // MAINWINDOW_H
