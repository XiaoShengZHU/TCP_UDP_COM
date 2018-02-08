/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

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

class Ui_TcpClient
{
public:
    QLabel *label_2;
    QLabel *label;
    QLineEdit *clientIPlineEdit;
    QLineEdit *clientPortlineEdit;
    QPushButton *OKpushButton;

    void setupUi(QDialog *TcpClient)
    {
        if (TcpClient->objectName().isEmpty())
            TcpClient->setObjectName(QStringLiteral("TcpClient"));
        TcpClient->resize(446, 225);
        label_2 = new QLabel(TcpClient);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(28, 49, 36, 23));
        label = new QLabel(TcpClient);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(28, 20, 36, 23));
        clientIPlineEdit = new QLineEdit(TcpClient);
        clientIPlineEdit->setObjectName(QStringLiteral("clientIPlineEdit"));
        clientIPlineEdit->setGeometry(QRect(70, 21, 133, 20));
        clientPortlineEdit = new QLineEdit(TcpClient);
        clientPortlineEdit->setObjectName(QStringLiteral("clientPortlineEdit"));
        clientPortlineEdit->setGeometry(QRect(70, 50, 133, 20));
        OKpushButton = new QPushButton(TcpClient);
        OKpushButton->setObjectName(QStringLiteral("OKpushButton"));
        OKpushButton->setGeometry(QRect(260, 130, 75, 23));

        retranslateUi(TcpClient);

        QMetaObject::connectSlotsByName(TcpClient);
    } // setupUi

    void retranslateUi(QDialog *TcpClient)
    {
        TcpClient->setWindowTitle(QApplication::translate("TcpClient", "Dialog", 0));
        label_2->setText(QApplication::translate("TcpClient", "\347\253\257\345\217\243\357\274\232", 0));
        label->setText(QApplication::translate("TcpClient", "IP\357\274\232", 0));
        clientIPlineEdit->setText(QApplication::translate("TcpClient", "192.168.12.72", 0));
        clientPortlineEdit->setText(QApplication::translate("TcpClient", "60000", 0));
        OKpushButton->setText(QApplication::translate("TcpClient", "\347\241\256 \345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class TcpClient: public Ui_TcpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
