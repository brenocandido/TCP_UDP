#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setupConnections();
}

void MainWindow::setupConnections()
{
    connect(ui->udpSelect, SIGNAL(clicked(bool)), this, SLOT(udpSelected()));
    connect(ui->tcpSelect, SIGNAL(clicked(bool)), this, SLOT(tcpSelected()));

    connect(ui->clientSend, SIGNAL(clicked(bool)), this, SLOT(clientSend()));
    connect(ui->serverListen, SIGNAL(clicked(bool)), this, SLOT(serverListen()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::udpSelected()
{
    _protocol = UDP;
    ui->tcpSelect->setChecked(false);
}

void MainWindow::tcpSelected()
{
    _protocol = TCP;
    ui->udpSelect->setChecked(false);
}

void MainWindow::clientSend()
{
    _client = new UDP_Client(ui->portClient->text().toInt(),
                             ui->destinationPort->text().toInt(),
                             QHostAddress(ui->destinationIp->text()),
                             ui->clientMessage->toPlainText(),
                             false, true);
}

void MainWindow::serverListen()
{
    _server = new UDP_Server(ui->portServer->text().toInt());
}
