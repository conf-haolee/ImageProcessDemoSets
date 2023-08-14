#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include "CountBase.h"

class UiFace;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(UiFace* uiface,QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    UiFace* m_uiface;
};
#endif // MAINWINDOW_H
