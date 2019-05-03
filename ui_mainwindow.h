/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *screen;
    QWidget *commWidget;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *commLayout;
    QWidget *clientWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *clientLayout;
    QLabel *label;
    QHBoxLayout *portLayoutClient;
    QLabel *portLabelClient;
    QLineEdit *portClient;
    QHBoxLayout *destinationLayout;
    QLabel *destinationLabel;
    QLineEdit *destinationPort;
    QHBoxLayout *ipLayout;
    QLabel *ipLabel;
    QLineEdit *destinationIp;
    QTextEdit *clientMessage;
    QPushButton *clientSend;
    QFrame *line;
    QWidget *serverWidget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *serverLayout;
    QLabel *label_2;
    QHBoxLayout *portLayoutServer;
    QLabel *portLabelServer;
    QLineEdit *portServer;
    QTextBrowser *serverTerminal;
    QPushButton *serverListen;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *topLayout;
    QWidget *configWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *configLayout;
    QFormLayout *protocolLayout;
    QLabel *protocolLabel;
    QRadioButton *udpSelect;
    QRadioButton *tcpSelect;
    QWidget *buttonsWidget;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout;
    QPushButton *aboutButton;
    QPushButton *helpButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(628, 414);
        screen = new QWidget(MainWindow);
        screen->setObjectName(QStringLiteral("screen"));
        commWidget = new QWidget(screen);
        commWidget->setObjectName(QStringLiteral("commWidget"));
        commWidget->setGeometry(QRect(10, 80, 601, 321));
        horizontalLayoutWidget_3 = new QWidget(commWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 40, 601, 281));
        commLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        commLayout->setSpacing(6);
        commLayout->setContentsMargins(11, 11, 11, 11);
        commLayout->setObjectName(QStringLiteral("commLayout"));
        commLayout->setContentsMargins(0, 0, 0, 0);
        clientWidget = new QWidget(horizontalLayoutWidget_3);
        clientWidget->setObjectName(QStringLiteral("clientWidget"));
        verticalLayoutWidget_2 = new QWidget(clientWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 291, 271));
        clientLayout = new QVBoxLayout(verticalLayoutWidget_2);
        clientLayout->setSpacing(6);
        clientLayout->setContentsMargins(11, 11, 11, 11);
        clientLayout->setObjectName(QStringLiteral("clientLayout"));
        clientLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        clientLayout->addWidget(label);

        portLayoutClient = new QHBoxLayout();
        portLayoutClient->setSpacing(6);
        portLayoutClient->setObjectName(QStringLiteral("portLayoutClient"));
        portLabelClient = new QLabel(verticalLayoutWidget_2);
        portLabelClient->setObjectName(QStringLiteral("portLabelClient"));

        portLayoutClient->addWidget(portLabelClient);

        portClient = new QLineEdit(verticalLayoutWidget_2);
        portClient->setObjectName(QStringLiteral("portClient"));

        portLayoutClient->addWidget(portClient);


        clientLayout->addLayout(portLayoutClient);

        destinationLayout = new QHBoxLayout();
        destinationLayout->setSpacing(6);
        destinationLayout->setObjectName(QStringLiteral("destinationLayout"));
        destinationLabel = new QLabel(verticalLayoutWidget_2);
        destinationLabel->setObjectName(QStringLiteral("destinationLabel"));

        destinationLayout->addWidget(destinationLabel);

        destinationPort = new QLineEdit(verticalLayoutWidget_2);
        destinationPort->setObjectName(QStringLiteral("destinationPort"));

        destinationLayout->addWidget(destinationPort);


        clientLayout->addLayout(destinationLayout);

        ipLayout = new QHBoxLayout();
        ipLayout->setSpacing(6);
        ipLayout->setObjectName(QStringLiteral("ipLayout"));
        ipLabel = new QLabel(verticalLayoutWidget_2);
        ipLabel->setObjectName(QStringLiteral("ipLabel"));

        ipLayout->addWidget(ipLabel);

        destinationIp = new QLineEdit(verticalLayoutWidget_2);
        destinationIp->setObjectName(QStringLiteral("destinationIp"));

        ipLayout->addWidget(destinationIp);


        clientLayout->addLayout(ipLayout);

        clientMessage = new QTextEdit(verticalLayoutWidget_2);
        clientMessage->setObjectName(QStringLiteral("clientMessage"));

        clientLayout->addWidget(clientMessage);

        clientSend = new QPushButton(verticalLayoutWidget_2);
        clientSend->setObjectName(QStringLiteral("clientSend"));

        clientLayout->addWidget(clientSend);


        commLayout->addWidget(clientWidget);

        line = new QFrame(horizontalLayoutWidget_3);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        commLayout->addWidget(line);

        serverWidget = new QWidget(horizontalLayoutWidget_3);
        serverWidget->setObjectName(QStringLiteral("serverWidget"));
        verticalLayoutWidget_3 = new QWidget(serverWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 281, 271));
        serverLayout = new QVBoxLayout(verticalLayoutWidget_3);
        serverLayout->setSpacing(6);
        serverLayout->setContentsMargins(11, 11, 11, 11);
        serverLayout->setObjectName(QStringLiteral("serverLayout"));
        serverLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        serverLayout->addWidget(label_2);

        portLayoutServer = new QHBoxLayout();
        portLayoutServer->setSpacing(6);
        portLayoutServer->setObjectName(QStringLiteral("portLayoutServer"));
        portLabelServer = new QLabel(verticalLayoutWidget_3);
        portLabelServer->setObjectName(QStringLiteral("portLabelServer"));

        portLayoutServer->addWidget(portLabelServer);

        portServer = new QLineEdit(verticalLayoutWidget_3);
        portServer->setObjectName(QStringLiteral("portServer"));

        portLayoutServer->addWidget(portServer);


        serverLayout->addLayout(portLayoutServer);

        serverTerminal = new QTextBrowser(verticalLayoutWidget_3);
        serverTerminal->setObjectName(QStringLiteral("serverTerminal"));

        serverLayout->addWidget(serverTerminal);

        serverListen = new QPushButton(verticalLayoutWidget_3);
        serverListen->setObjectName(QStringLiteral("serverListen"));

        serverLayout->addWidget(serverListen);


        commLayout->addWidget(serverWidget);

        horizontalLayoutWidget = new QWidget(screen);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 601, 91));
        topLayout = new QHBoxLayout(horizontalLayoutWidget);
        topLayout->setSpacing(6);
        topLayout->setContentsMargins(11, 11, 11, 11);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(0, 0, 0, 0);
        configWidget = new QWidget(horizontalLayoutWidget);
        configWidget->setObjectName(QStringLiteral("configWidget"));
        verticalLayoutWidget = new QWidget(configWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 181, 71));
        configLayout = new QVBoxLayout(verticalLayoutWidget);
        configLayout->setSpacing(6);
        configLayout->setContentsMargins(11, 11, 11, 11);
        configLayout->setObjectName(QStringLiteral("configLayout"));
        configLayout->setContentsMargins(0, 0, 0, 0);
        protocolLayout = new QFormLayout();
        protocolLayout->setSpacing(6);
        protocolLayout->setObjectName(QStringLiteral("protocolLayout"));
        protocolLabel = new QLabel(verticalLayoutWidget);
        protocolLabel->setObjectName(QStringLiteral("protocolLabel"));

        protocolLayout->setWidget(1, QFormLayout::LabelRole, protocolLabel);

        udpSelect = new QRadioButton(verticalLayoutWidget);
        udpSelect->setObjectName(QStringLiteral("udpSelect"));

        protocolLayout->setWidget(1, QFormLayout::FieldRole, udpSelect);

        tcpSelect = new QRadioButton(verticalLayoutWidget);
        tcpSelect->setObjectName(QStringLiteral("tcpSelect"));

        protocolLayout->setWidget(2, QFormLayout::FieldRole, tcpSelect);


        configLayout->addLayout(protocolLayout);


        topLayout->addWidget(configWidget);

        buttonsWidget = new QWidget(horizontalLayoutWidget);
        buttonsWidget->setObjectName(QStringLiteral("buttonsWidget"));
        verticalLayoutWidget_4 = new QWidget(buttonsWidget);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(170, 0, 121, 89));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        aboutButton = new QPushButton(verticalLayoutWidget_4);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));

        verticalLayout->addWidget(aboutButton);

        helpButton = new QPushButton(verticalLayoutWidget_4);
        helpButton->setObjectName(QStringLiteral("helpButton"));

        verticalLayout->addWidget(helpButton);


        topLayout->addWidget(buttonsWidget);

        MainWindow->setCentralWidget(screen);
        commWidget->raise();
        horizontalLayoutWidget->raise();
        verticalLayoutWidget_4->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Client", Q_NULLPTR));
        portLabelClient->setText(QApplication::translate("MainWindow", "Port:                        ", Q_NULLPTR));
        destinationLabel->setText(QApplication::translate("MainWindow", "Destination port:", Q_NULLPTR));
        ipLabel->setText(QApplication::translate("MainWindow", "Destination IP:     ", Q_NULLPTR));
        clientSend->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Server", Q_NULLPTR));
        portLabelServer->setText(QApplication::translate("MainWindow", "Port:                        ", Q_NULLPTR));
        serverListen->setText(QApplication::translate("MainWindow", "Listen", Q_NULLPTR));
        protocolLabel->setText(QApplication::translate("MainWindow", "Protocol:", Q_NULLPTR));
        udpSelect->setText(QApplication::translate("MainWindow", "UDP", Q_NULLPTR));
        tcpSelect->setText(QApplication::translate("MainWindow", "TCP", Q_NULLPTR));
        aboutButton->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        helpButton->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
