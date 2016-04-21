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
while (true)
{
 return hello;
}
}
QPixmap MainWindow::getImage()
{
  QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/Pictures",
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
ui->label->setScaledContents(true);
ui->label->setPixmap(MainWindow::getImage());
ui->label->show();
}

//Snap2Text Button
void MainWindow::on_pushButton_clicked()
{
ui->plainTextEdit->clear();
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

