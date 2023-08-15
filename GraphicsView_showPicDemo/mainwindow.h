#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QWheelEvent>
#include <QFileDialog>


 #include "ImageWidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void recvShowPicSignal(QImage image);//接收并显示图片的函数

private slots:
    void on_readImage_Btn_clicked();

private:
    Ui::MainWindow *ui;
    ImageWidget *m_Image;
};
#endif // MAINWINDOW_H
