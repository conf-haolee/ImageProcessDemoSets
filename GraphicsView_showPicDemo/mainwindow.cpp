#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    setWindowTitle(QStringLiteral("QtQGraphicsView实现图片放大、缩小、鼠标拖动、以鼠标点放大缩小"));




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::recvShowPicSignal(QImage image)
{
    //关闭水平 垂直滚动条
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //The QPixmap class is an off-screen image representation that can be used as a paint device
    QPixmap ConvertPixmap = QPixmap::fromImage(image);

    //要用QGraphicsView就必须要有QGraphicsScene搭配着用
    QGraphicsScene  *qgraphicsScene = new QGraphicsScene;

    //实例化类ImageWidget的对象m_Image，该类继承自QGraphicsItem，是自己写的类
    m_Image = new ImageWidget(&ConvertPixmap);

    int nwith = ui->graphicsView->width();
    int nheight = ui->graphicsView->height();

    //将界面控件Graphics View的width和height传进类m_Image中
    m_Image->setQGraphicsViewWH(nwith,nheight);

    //将QGraphicsItem类对象放进QGraphicsScene中
    qgraphicsScene->addItem(m_Image);

    //使视窗的大小固定在原始大小，不会随图片的放大而放大（默认状态下图片放大的时候视窗两边会自动出现滚动条，并且视窗内的视野会变大），防止图片放大后重新缩小的时候视窗太大而不方便观察图片
    ui->graphicsView->setSceneRect(QRectF(-(nwith/2),-(nheight/2),nwith,nheight));

    //Sets the current scene to scene. If scene is already being viewed, this function does nothing.
    ui->graphicsView->setScene(qgraphicsScene);



}


void MainWindow::on_readImage_Btn_clicked()
{

    QString imagePath = QFileDialog::getOpenFileName(this,
                                               "open",
                                               "D:",
                                               "img (*.png *.jpg *.bmp)");

    if(!imagePath.isNull())
    {
        QPixmap *backgroundPixmap = new QPixmap(imagePath);

        QImage sizedImage = QImage(backgroundPixmap->toImage());

        recvShowPicSignal(sizedImage);
    }

}

