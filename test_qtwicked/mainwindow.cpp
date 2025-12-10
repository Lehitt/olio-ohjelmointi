#include "mainwindow.h"
#include "page2.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnTest2, &QPushButton::clicked, this, &MainWindow::on_btnTest2_clicked);
    connect(ui->btnOpenPage2, &QPushButton::clicked, this, &MainWindow::openPage2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnTest1_clicked()
{
    qDebug()<<"klikkasit test1";
    ui->lavelResult->setText("klikkasit test1");
}

void MainWindow::on_btnTest2_clicked()
{
    QString name=ui->textName->text();
    ui->lavelResult->setText("terve " +name);

}

void MainWindow::openPage2()
{
    objectPage2=new Page2(this);
    objectPage2->setFname("jussi");
    connect(objectPage2, &Page2::nameSetted, this, &MainWindow::showNameFromPage2);
    objectPage2->show();
}

void MainWindow::showNameFromPage2()
{
    QString fname=objectPage2->getFname();
    ui->textName->setText(fname);
}

