#include "mainwindow.h"
#include "ui_mainwindow.h"
# include <QMainWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);
    setWindowFlags(windowFlags()&~Qt::WindowCloseButtonHint&~Qt::WindowContextHelpButtonHint);
    setFixedSize(this->width(),this->height());
    setWindowTitle("做我女朋友吧");
    player = new QMediaPlayer;
    dia = new Dialog;
}

MainWindow::~MainWindow()
{
    delete ui;
}

//接受处理函数
void MainWindow::on_okButton_clicked()
{
    player->play();
    dia->setWindowTitle("我喜欢你");
    dia->show();
    this->close();
}
//拒绝处理函数
void MainWindow::on_noButton_clicked()
{
    if(this->x_num == 0)
    {
        QMessageBox::information(this,"提示","工资都上交！");
        this->x_num++;
    }
    else if(this->x_num == 1)
    {
        QMessageBox::information(this,"提示","我有房有车！");
        this->x_num++;
    }
    else if(this->x_num == 2)
    {
        QMessageBox::information(this,"提示","我做饭带娃");
        this->x_num++;
    }
    else if(this->x_num == 3)
    {
        QMessageBox::information(this,"提示","掉水先救你");
        this->x_num++;
    }
    else if(this->x_num == 4)
    {
        QMessageBox::information(this,"提示","我这么可爱，你忍心吗？");
        this->x_num++;
    }
    else
    {
        QMessageBox::information(this,"提示","我这么可爱，你忍心吗？");
    }

}
