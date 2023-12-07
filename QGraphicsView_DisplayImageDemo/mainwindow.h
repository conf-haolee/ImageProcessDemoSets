#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QString>
#include <QImage>
#include <QDebug>
#include <QFileDialog>
#include "viewwidget.h"

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
    void on_importImage_Btn_clicked();

private:
    Ui::MainWindow *ui;
    ViewWidget *m_viewWidget;
    QImage m_qimage;
};
#endif // MAINWINDOW_H
