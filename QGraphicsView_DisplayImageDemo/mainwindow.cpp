#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("读取图像 缩放显示Demo");
    m_viewWidget = new ViewWidget(nullptr);
    ui->horizontalLayout_2->addWidget(m_viewWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 读取图像
void MainWindow::on_importImage_Btn_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this,
                                                     "open",
                                                     "D:",
                                                     "img (*.png *.jpg *.bmp)");
    if(!imagePath.isNull())
    {
        m_qimage.load(imagePath);
        m_viewWidget->clearItem();
        m_viewWidget->SetImage(m_qimage);
    }
}

