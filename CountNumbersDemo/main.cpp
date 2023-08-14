#include "mainwindow.h"
#include "uiFace.h"
#include "CountAlgorithm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	UiFace* uiface = new UiFace();
	CountAlgorithm* countalgorithm = new CountAlgorithm();

    QApplication a(argc, argv);
    MainWindow w(uiface);
    w.show();
    return a.exec();
}
