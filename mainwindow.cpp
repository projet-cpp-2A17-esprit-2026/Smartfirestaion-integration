#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tableaudebord_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // page 0
}


void MainWindow::on_stock_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // page 1
}


void MainWindow::on_vehicules_6_clicked()
{
     ui->stackedWidget->setCurrentIndex(2); // page 2
}

