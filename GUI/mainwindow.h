#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>

#include <QCamera>
#include <QCameraImageCapture>
#include <QMediaRecorder>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
