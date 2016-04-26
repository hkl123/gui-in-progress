/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPlainTextEdit *plainTextEdit;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1055, 545);
        MainWindow->setStyleSheet(QLatin1String("plainTextEdit{background-color : white}\n"
"QWidget{background-color: black}\n"
"QPushButton { color: black; background-color: linen }\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 450, 121, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("QWidget{background-color: random}\n"
"QPushButton { color: black; background-color: linen }\n"
"QPushButton_4 {color:black; background-color: linen}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(650, 450, 121, 41));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(420, 60, 541, 371));
        plainTextEdit->setAutoFillBackground(false);
        plainTextEdit->setStyleSheet(QStringLiteral(""));
        plainTextEdit->setBackgroundVisible(false);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(80, 40, 321, 401));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-24, 12, 301, 381));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 20, 271, 371));
        scrollArea->setMaximumSize(QSize(271, 16777215));
        scrollArea->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 369));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 369));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 150, 241, 31));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 47, 13));
        stackedWidget->addWidget(page_2);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(880, 470, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(880, 440, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Snap2Txt", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Save .txt", 0));
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "Welcome to Snap2Txt!\n"
"Your Text Will Appear Here:\n"
"\n"
"", 0));
        label->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "If you can read this, your camera is not enabled", 0));
        label_2->setText(QApplication::translate("MainWindow", "Camera:", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Clear", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
