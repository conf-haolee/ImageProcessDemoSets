#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    setWindowTitle(QStringLiteral("QtQGraphicsViewʵ��ͼƬ�Ŵ���С������϶���������Ŵ���С"));




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::recvShowPicSignal(QImage image)
{
    //�ر�ˮƽ ��ֱ������
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //The QPixmap class is an off-screen image representation that can be used as a paint device
    QPixmap ConvertPixmap = QPixmap::fromImage(image);

    //Ҫ��QGraphicsView�ͱ���Ҫ��QGraphicsScene��������
    QGraphicsScene  *qgraphicsScene = new QGraphicsScene;

    //ʵ������ImageWidget�Ķ���m_Image������̳���QGraphicsItem�����Լ�д����
    m_Image = new ImageWidget(&ConvertPixmap);

    int nwith = ui->graphicsView->width();
    int nheight = ui->graphicsView->height();

    //������ؼ�Graphics View��width��height������m_Image��
    m_Image->setQGraphicsViewWH(nwith,nheight);

    //��QGraphicsItem�����Ž�QGraphicsScene��
    qgraphicsScene->addItem(m_Image);

    //ʹ�Ӵ��Ĵ�С�̶���ԭʼ��С��������ͼƬ�ķŴ���Ŵ�Ĭ��״̬��ͼƬ�Ŵ��ʱ���Ӵ����߻��Զ����ֹ������������Ӵ��ڵ���Ұ���󣩣���ֹͼƬ�Ŵ��������С��ʱ���Ӵ�̫���������۲�ͼƬ
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

