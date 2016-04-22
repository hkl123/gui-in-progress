#include <iostream>

using namespace std;
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaService>
#include <QMediaRecorder>
#include <QCameraViewfinder>
#include <QCamera>
#include <QCameraInfo>
#include <QMediaMetaData>
#include <QtWidgets>
#include <QWidget>

//QString hello = "hello";
//QPixmap image("C:Users/justx_000/Pictures/test.jpg");
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{

    ui->setupUi(this);

}
QString MainWindow::getText()
{
 QString hello = "hello";

 return hello;

}
QPixmap MainWindow::getImage()
{
  ui->scrollArea->close();
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "",
                                                    tr("Images (*.png *.xpm *.jpg)"));
  QPixmap image(fileName);
  return image;
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Take Picture
void MainWindow::on_pushButton_2_clicked()
{

}

//Load Images
void MainWindow::on_pushButton_3_clicked()
{

camera->stop();
ui->stackedWidget->setCurrentIndex(0);
ui->label->setScaledContents(true);
ui->label->setPixmap(getImage());
//ui->label->show();
cout << ui->stackedWidget->currentIndex() << endl;
}

//Snap2Text Button
void MainWindow::on_pushButton_clicked()
{
//ui->label->clear();
ui->stackedWidget->setCurrentIndex(1);
//ui->stackedWidget->setCurrentWidget(viewfinder);
cout << ui->stackedWidget->currentWidget() << endl;
cout << ui->stackedWidget->widget(1) << endl;
ui->plainTextEdit->clear();
//camera->setViewfinder(viewfinder);
ui->scrollArea->setWidget(viewfinder);
camera->setViewfinder(viewfinder);
//ui->stackedWidget->setCurrentWidget(viewfinder);
camera->start();



ui->plainTextEdit->insertPlainText(MainWindow::getText());
}

//Save Button
void MainWindow::on_pushButton_4_clicked()
{

}

//text box
void MainWindow::on_plainTextEdit_windowIconTextChanged(const QString &iconText)
{
 //   QLineEdit::insert("random");
}

