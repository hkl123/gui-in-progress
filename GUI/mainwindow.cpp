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


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
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

}

//Snap2Text Button
void MainWindow::on_pushButton_clicked()
{
    cout << "test" << endl;
    this->on_plainTextEdit_windowIconTextChanged("random");
}

//Save Button
void MainWindow::on_pushButton_4_clicked()
{

}

//text box
void MainWindow::on_plainTextEdit_windowIconTextChanged(const QString &iconText)
{
    QLineEdit::insert("random");
}
