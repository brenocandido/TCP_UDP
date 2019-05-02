#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHostAddress>
#include "udp_client.h"
#include "udp_server.h"

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
private:

    Ui::MainWindow *ui;
    protocol _protocol = None;

    UDP_Client *_client;
    UDP_Server *_server;

    void setupConnections();
};

#endif // MAINWINDOW_H
