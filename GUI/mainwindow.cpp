#include "mainwindow.h"
#include "ui_mainwindow.h"
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

}
//Retrives text from another file
QString MainWindow::getText()
{
//string test = qtest->setText();
//str = QString::fromStdString(test);
 return str;

}
//loads image future feature
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


//Load Images ~ will be changed to take picture future feature
void MainWindow::on_pushButton_3_clicked()
{
/*
camera->stop();
ui->stackedWidget->setCurrentIndex(0);
ui->label->setScaledContents(true);
ui->label->setPixmap(getImage());
cout << ui->stackedWidget->currentIndex() << endl;
*/

}

//Snap2Text Button
void MainWindow::on_pushButton_clicked()
{

    ui->plainTextEdit->insertPlainText(MainWindow::getText());

}




