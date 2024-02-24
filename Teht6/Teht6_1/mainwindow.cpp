#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),

    count(0) // initialize counter

{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countButton_clicked()
{
    count++;
    ui->resultBox->setText(QString::number(count));
}

void MainWindow::on_resetButton_clicked()
{
    count = 0;
    ui->resultBox->setText(QString::number(count));
}

void MainWindow::on_resultBox_returnPressed()
{
}
