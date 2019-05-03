#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->udpSelect->setChecked(true);
    _protocol = UDP;

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
    if(_protocol == UDP)
    {
        _udp_client = new UDP_Client(ui->portClient->text().toInt(),
                                 ui->destinationPort->text().toInt(),
                                 QHostAddress(ui->destinationIp->text()),
                                 ui->clientMessage->toPlainText(),
                                 false, true);

        _udp_client->moveToThread(&_clientThread);
        connect(&_clientThread, SIGNAL(finished()), _udp_client, SLOT(deleteLater()));
        _clientThread.start();
        _udp_client->start();
    }
    else if(_protocol == TCP)
    {
        _tcp_client = new TCP_Client(ui->destinationPort->text().toInt(),
                                     QHostAddress(ui->destinationIp->text()),
                                     ui->clientMessage->toPlainText());
        _tcp_client->moveToThread(&_clientThread);
        connect(&_clientThread, SIGNAL(finished()), _tcp_client, SLOT(deleteLater()));
        _clientThread.start();
        _tcp_client->start();
    }
    else
    {
        qDebug() << "No protocol selected";
    }
}

void MainWindow::serverListen()
{
    if(_protocol == UDP)
    {
        ui->serverListen->setDisabled(true);
        _udp_server = new UDP_Server(ui->portServer->text().toInt());

        _udp_server->moveToThread(&_serverThread);
        connect(&_serverThread, SIGNAL(started()), _udp_server, SLOT(start_server()));
        connect(&_serverThread, SIGNAL(finished()), _udp_server, SLOT(deleteLater()));
        connect(_udp_server, SIGNAL(message_received()), this, SLOT(serverMessageReceived()));
        _serverThread.start();
    }
    else if(_protocol == TCP)
    {
        ui->serverListen->setDisabled(true);

        _tcp_server = new TCP_Server(ui->portServer->text().toInt());

        _tcp_server->moveToThread(&_serverThread);
        connect(&_serverThread, SIGNAL(started()), _tcp_server, SLOT(start_server()));
        connect(&_serverThread, SIGNAL(finished()), _tcp_server, SLOT(deleteLater()));
        connect(_tcp_server, SIGNAL(messageReceived()), this, SLOT(serverMessageReceived()));
        _serverThread.start();
    }
    else{
        qDebug() << "No protocol selected";
    }
        ui->configWidget->setDisabled(true);
}

void MainWindow::serverMessageReceived()
{
    if(_protocol == UDP)
    {
        ui->serverTerminal->setText(QString(_udp_server->getData()));
    }
    else if(_protocol == TCP)
    {
        ui->serverTerminal->setText(QString(_tcp_server->getData()));
    }
}

void MainWindow::on_aboutButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("About");
    msgBox.setText(QString::fromUtf8("Trabalho para a matéria de Redes de Comunicação de Dados\n"
                   "Universidade Federal de Santa Catarina\u2122\n"
                   "Breno Candido Conrado\u00A9"));
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}

void MainWindow::on_helpButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Help");
    msgBox.setText( "1 - Select your desired protocol\n"
                    "2 - Send as the client, on the left side\n"
                    "3 - Receive as the server, on the right side"
                    "4 - Setup your client by inputting local port, destination port e destination IP.\n"
                    "5 - The message to be sent can be written in the text box.\n"
                    "6 - To setup the server, just input the desired port.\n");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setButtonText(QMessageBox::Ok, "Thanks! That's very helpful!");
    msgBox.exec();
}
