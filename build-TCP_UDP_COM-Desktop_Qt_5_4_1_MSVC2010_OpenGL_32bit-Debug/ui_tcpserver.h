/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TCPServer
{
public:
    QLabel *label_2;
    QLineEdit *serverPortlineEdit;
    QPushButton *OKpushButton;

    void setupUi(QDialog *TCPServer)
    {
        if (TCPServer->objectName().isEmpty())
            TCPServer->setObjectName(QStringLiteral("TCPServer"));
        TCPServer->resize(321, 80);
        label_2 = new QLabel(TCPServer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(18, 29, 36, 23));
        serverPortlineEdit = new QLineEdit(TCPServer);
        serverPortlineEdit->setObjectName(QStringLiteral("serverPortlineEdit"));
        serverPortlineEdit->setGeometry(QRect(60, 30, 141, 20));
        OKpushButton = new QPushButton(TCPServer);
        OKpushButton->setObjectName(QStringLiteral("OKpushButton"));
        OKpushButton->setGeometry(QRect(210, 30, 75, 23));

        retranslateUi(TCPServer);

        QMetaObject::connectSlotsByName(TCPServer);
    } // setupUi

    void retranslateUi(QDialog *TCPServer)
    {
        TCPServer->setWindowTitle(QApplication::translate("TCPServer", "Dialog", 0));
        label_2->setText(QApplication::translate("TCPServer", "\347\253\257\345\217\243\357\274\232", 0));
        serverPortlineEdit->setText(QApplication::translate("TCPServer", "5555", 0));
        OKpushButton->setText(QApplication::translate("TCPServer", "\347\241\256 \345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class TCPServer: public Ui_TCPServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
