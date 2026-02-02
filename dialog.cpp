#include "dialog.h"
#include "ui_dialog.h"
#include <QMovie>
#include <QDesktopServices>
#include <QUrl>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //动图显示
    ui->label->setScaledContents(true);
    QMovie *movie = new QMovie("D:\\Desktop\\QT\\loveyou\\gif.gif");
    ui->label->setMovie(movie);
    movie->start();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl(QLatin1String("D:/Desktop/QT/loveyou/xioaya/index.html")));
}
