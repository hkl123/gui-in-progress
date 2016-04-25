#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 //------------------ START CAMERA -----------------
    ui->stackedWidget->setCurrentIndex(1);
    ui->plainTextEdit->clear();
    ui->scrollArea->setWidget(viewfinder);
    camera->setViewfinder(viewfinder);
    camera->start();
//camera will be stopped when snap2txt button is pressed
}


//Retrives text from another file
QString MainWindow::getText()
{
    //string test = qtest->setText();
    //str = QString::fromStdString(test);
    return str;

}

//loads image
/* Will need to be used
 * for displaying the image
 * just saved
 */
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

/*
//Load Images ~ added feature later...
void MainWindow::on_pushButton_3_clicked()
{
    camera->stop();
//  ui->stackedWidget->setCurrentIndex(0);
//  ui->label->setScaledContents(true);
    ui->label->setPixmap(getImage());
//  cout << ui->stackedWidget->currentIndex() << endl;
}
*/


//Snap2Txt Button
/*This button will need to:
 * ~ Take Picture
 * ~ Save Picture
 * ~ Stop Camera
 * ~ make text pop up
 * ~ Show the picture just taken
 */
void MainWindow::on_pushButton_clicked()
{
    camera->stop(); //stop camera
    ui->plainTextEdit->insertPlainText(MainWindow::getText());
    QString textInBox = ui->plainTextEdit->toPlainText();

}

//save .txt button
void MainWindow::on_pushButton_4_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QString(),
               tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

       if (!fileName.isEmpty()) {
           QFile file(fileName);
           if (!file.open(QIODevice::WriteOnly)) {
               // error message
           } else {
               QTextStream stream(&file);
               stream << ui->plainTextEdit->toPlainText();
               stream.flush();
               file.close();
           }
       }
}
