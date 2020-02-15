#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QPixmap ethIcon = QPixmap("./asset/eth-icon.png");
//    ethIcon = ethIcon.scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation);
//    ui->label->setPixmap(ethIcon);
}

MainWindow::~MainWindow()
{
    delete ui;
}

