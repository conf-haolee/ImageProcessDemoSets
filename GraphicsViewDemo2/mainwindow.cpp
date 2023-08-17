#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	viewWidget = new ViewWidget(nullptr);
	ui->horizontalLayout->addWidget(viewWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_readImage_Btn_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this,
                                                     "open",
                                                     "D:",
                                                     "img (*.png *.jpg *.bmp)");

    if(!imagePath.isNull())
    {
        qimage.load(imagePath);
        viewWidget->SetImage(qimage);
        viewWidget->displayXld(qimage);
    }
}

//
void MainWindow::on_suitImage_Btn_clicked()
{
    viewWidget->setKeepRatio();
}


//  Í¼Ïñ 1£º1 ÏÔÊ¾
void MainWindow::on_showImage1_1Btn_clicked()
{
    viewWidget->setIgnoreRatio();
}

