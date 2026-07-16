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
