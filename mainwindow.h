#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QMediaPlayer>
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int x_num = 0;

private slots:
    void on_okButton_clicked();
    void on_noButton_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    Dialog *dia;
};
#endif // MAINWINDOW_H
