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

void MainWindow::on_btnCount_clicked()
{
    counter++;
    QString s = QString::number(counter);
    ui->labelInfo->setText("Painiketta Cout painettu: " + s);
    ui->txtResult->setText(s);
}

void MainWindow::on_btReset_clicked()
{
    counter=0;
    QString s = QString::number(counter);
    ui->labelInfo->setText("Painiketta Cout painettu: " + s);
    ui->txtResult->setText(s);
}

