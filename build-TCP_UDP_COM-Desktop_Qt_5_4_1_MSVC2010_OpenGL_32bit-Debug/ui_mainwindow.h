/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *StoppushButton;
    QPushButton *ChoosepushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QLabel *label_3;
    QTextEdit *SendtextEdit;
    QSplitter *splitter_2;
    QLabel *label_5;
    QTextBrowser *ViewtextEdit;
    QLabel *Statelabel;
    QPushButton *SendpushButton;
    QPushButton *DisplaypushButton;
    QLineEdit *timelineEdit;
    QPushButton *ClearpushButton;
    QLabel *label_20;
    QCheckBox *AutoSendcheckBox;
    QLabel *label_19;
    QComboBox *StylecomboBox;
    QPushButton *OpenpushButton;
    QPushButton *ClosepushButton;
    QPushButton *PeizhipushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(573, 585);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        StoppushButton = new QPushButton(centralWidget);
        StoppushButton->setObjectName(QStringLiteral("StoppushButton"));
        StoppushButton->setGeometry(QRect(1016, 94, 75, 23));
        ChoosepushButton = new QPushButton(centralWidget);
        ChoosepushButton->setObjectName(QStringLiteral("ChoosepushButton"));
        ChoosepushButton->setGeometry(QRect(1016, 130, 75, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 43, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 43, 2, 2));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        layoutWidget_3 = new QWidget(centralWidget);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 96, 531, 391));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 6);
        splitter = new QSplitter(layoutWidget_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter->addWidget(label_3);
        SendtextEdit = new QTextEdit(splitter);
        SendtextEdit->setObjectName(QStringLiteral("SendtextEdit"));
        splitter->addWidget(SendtextEdit);

        horizontalLayout_3->addWidget(splitter);

        splitter_2 = new QSplitter(layoutWidget_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_5 = new QLabel(splitter_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        splitter_2->addWidget(label_5);
        ViewtextEdit = new QTextBrowser(splitter_2);
        ViewtextEdit->setObjectName(QStringLiteral("ViewtextEdit"));
        splitter_2->addWidget(ViewtextEdit);

        horizontalLayout_3->addWidget(splitter_2);

        horizontalLayout_3->setStretch(1, 1);
        Statelabel = new QLabel(centralWidget);
        Statelabel->setObjectName(QStringLiteral("Statelabel"));
        Statelabel->setGeometry(QRect(20, 496, 191, 20));
        SendpushButton = new QPushButton(centralWidget);
        SendpushButton->setObjectName(QStringLiteral("SendpushButton"));
        SendpushButton->setGeometry(QRect(190, 66, 75, 23));
        DisplaypushButton = new QPushButton(centralWidget);
        DisplaypushButton->setObjectName(QStringLiteral("DisplaypushButton"));
        DisplaypushButton->setGeometry(QRect(400, 66, 75, 23));
        DisplaypushButton->setCheckable(true);
        timelineEdit = new QLineEdit(centralWidget);
        timelineEdit->setObjectName(QStringLiteral("timelineEdit"));
        timelineEdit->setGeometry(QRect(120, 66, 41, 20));
        ClearpushButton = new QPushButton(centralWidget);
        ClearpushButton->setObjectName(QStringLiteral("ClearpushButton"));
        ClearpushButton->setGeometry(QRect(480, 66, 75, 23));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(165, 69, 12, 12));
        AutoSendcheckBox = new QCheckBox(centralWidget);
        AutoSendcheckBox->setObjectName(QStringLiteral("AutoSendcheckBox"));
        AutoSendcheckBox->setGeometry(QRect(20, 68, 71, 16));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(95, 70, 24, 12));
        StylecomboBox = new QComboBox(centralWidget);
        StylecomboBox->setObjectName(QStringLiteral("StylecomboBox"));
        StylecomboBox->setGeometry(QRect(20, 20, 101, 22));
        OpenpushButton = new QPushButton(centralWidget);
        OpenpushButton->setObjectName(QStringLiteral("OpenpushButton"));
        OpenpushButton->setGeometry(QRect(240, 20, 75, 23));
        ClosepushButton = new QPushButton(centralWidget);
        ClosepushButton->setObjectName(QStringLiteral("ClosepushButton"));
        ClosepushButton->setGeometry(QRect(330, 20, 75, 23));
        PeizhipushButton = new QPushButton(centralWidget);
        PeizhipushButton->setObjectName(QStringLiteral("PeizhipushButton"));
        PeizhipushButton->setGeometry(QRect(130, 20, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 573, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        StoppushButton->setText(QApplication::translate("MainWindow", "\345\201\234 \346\255\242", 0));
        ChoosepushButton->setText(QApplication::translate("MainWindow", "\351\200\211 \351\241\271", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256\345\214\272", 0));
        label_5->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\346\230\276\347\244\272\345\214\272", 0));
        Statelabel->setText(QApplication::translate("MainWindow", "Ready", 0));
        SendpushButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", 0));
        DisplaypushButton->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\230\276\347\244\272", 0));
        timelineEdit->setText(QApplication::translate("MainWindow", "1000", 0));
        ClearpushButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\230\276\347\244\272", 0));
        label_20->setText(QApplication::translate("MainWindow", "ms", 0));
        AutoSendcheckBox->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\345\217\221\351\200\201", 0));
        label_19->setText(QApplication::translate("MainWindow", "\351\227\264\351\232\224", 0));
        StylecomboBox->clear();
        StylecomboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "TCP Server", 0)
         << QApplication::translate("MainWindow", "TCP Client", 0)
         << QApplication::translate("MainWindow", "UDP", 0)
         << QApplication::translate("MainWindow", "Serial COM", 0)
        );
        OpenpushButton->setText(QApplication::translate("MainWindow", "\346\211\223 \345\274\200", 0));
        ClosepushButton->setText(QApplication::translate("MainWindow", "\345\205\263 \351\227\255", 0));
        PeizhipushButton->setText(QApplication::translate("MainWindow", "\351\205\215 \347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
