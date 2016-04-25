#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QCamera>
#include <QCameraImageCapture>
#include <QMainWindow>
#include <QCameraViewfinder>
#include <QMediaService>
#include <QMediaRecorder>
#include <QCameraViewfinder>
#include <QCamera>
#include <QCameraInfo>
#include <QMediaMetaData>
#include <QtWidgets>
#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QCamera *camera=new QCamera(this);
    QCameraViewfinder *viewfinder = new QCameraViewfinder(this);
    //test *qtest = new test();

    explicit MainWindow(QWidget *parent = 0);
    QString getText();
    QPixmap getImage();
    ~MainWindow();

private slots:


    void on_pushButton_3_clicked();

    void on_pushButton_clicked();








private:
    Ui::MainWindow *ui;
    QString str;

};

#endif // MAINWINDOW_H
