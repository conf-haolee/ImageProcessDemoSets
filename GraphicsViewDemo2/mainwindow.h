#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "viewwidget.h"
#include <QFileDialog>

#include <QDebug>
#include<halconcpp/HalconCpp.h>

using namespace HalconCpp;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_readImage_Btn_clicked();


    void on_suitImage_Btn_clicked();

    void on_showImage1_1Btn_clicked();

private:
    Ui::MainWindow *ui;
    QImage qimage;
	ViewWidget *viewWidget;



};
#endif // MAINWINDOW_H
