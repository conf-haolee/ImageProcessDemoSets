#include "mainwindow.h"

#include "ui_mainwindow.h"
#include"materialmanagedialog.h"
#include "uiFace.h"


MainWindow::MainWindow(UiFace* uiface,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_uiface = uiface;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_8_clicked()
{
    MaterialManageDialog* d = new MaterialManageDialog(this);
    d->exec();

}


void MainWindow::on_pushButton_2_clicked()
{
    qDebug() << "槽函数触发开始运行";
    m_uiface->DoStart();
}

