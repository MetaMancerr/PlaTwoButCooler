#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowOpacity(0);
    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(1000);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start(QAbstractAnimation::DeleteWhenStopped);

    registerWindow = new registerwindow();

    QFile file("users.json");

    if(!file.exists()){
        file.open(QIODevice::WriteOnly);
        QJsonArray array;
        file.write(QJsonDocument(array).toJson());
        file.close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{

}


void MainWindow::on_registerButton_clicked()
{
    registerWindow->show();
    this->hide();
}

