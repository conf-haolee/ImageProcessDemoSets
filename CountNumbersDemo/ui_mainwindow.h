/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_12;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_8;
    QWidget *widget_9;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_5;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *label_6;
    QWidget *widget_11;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_6;
    QLCDNumber *lcdNumber_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *widget_6;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_10 = new QHBoxLayout(widget);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_10->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_10->addWidget(comboBox);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_10->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_10->addWidget(lineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_10->addWidget(label_3);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));

        verticalLayout_3->addWidget(widget_8);

        widget_9 = new QWidget(widget_3);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setMaximumSize(QSize(16777215, 120));

        verticalLayout_3->addWidget(widget_9);


        horizontalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMaximumSize(QSize(16777215, 120));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_10 = new QWidget(widget_5);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        verticalLayout_5 = new QVBoxLayout(widget_10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(widget_10);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout_5->addWidget(lcdNumber);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget_10);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        label_4 = new QLabel(widget_10);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_4);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(widget_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_7);

        label_6 = new QLabel(widget_10);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_6);


        verticalLayout_5->addLayout(horizontalLayout_7);


        horizontalLayout_4->addWidget(widget_10);

        widget_11 = new QWidget(widget_5);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_12 = new QWidget(widget_11);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(0, 0, 188, 120));
        verticalLayout_6 = new QVBoxLayout(widget_12);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lcdNumber_2 = new QLCDNumber(widget_12);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        verticalLayout_6->addWidget(lcdNumber_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(widget_12);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_8);

        label_9 = new QLabel(widget_12);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_9);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(widget_12);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_10);

        label_11 = new QLabel(widget_12);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_11);


        verticalLayout_6->addLayout(horizontalLayout_9);


        horizontalLayout_4->addWidget(widget_11);


        verticalLayout_2->addWidget(widget_5);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));

        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMaximumSize(QSize(16777215, 90));
        verticalLayout_4 = new QVBoxLayout(widget_7);
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(widget_7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget_7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget_7);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton = new QPushButton(widget_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_6 = new QPushButton(widget_7);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget_7);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(widget_7);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_5 = new QPushButton(widget_7);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(widget_7);


        horizontalLayout->addWidget(widget_4);


        verticalLayout->addWidget(widget_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\211\251\346\226\231\345\220\215\347\247\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Cliptest", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\347\211\251\346\226\231\346\235\241\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264\346\230\276\347\244\272", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\350\277\220\350\241\214\347\212\266\346\200\201", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\262\227\346\212\225\346\226\231\345\214\272\347\212\266\346\200\201", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\255\243\345\270\270", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\347\262\227\346\212\225\346\226\231\345\214\272\351\200\237\345\272\246", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "---\344\270\252/\347\247\222", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\347\262\276\346\212\225\346\226\231\345\214\272\347\212\266\346\200\201", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\346\255\243\345\270\270", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\347\262\276\346\212\225\346\226\231\345\214\272\351\200\237\345\272\246", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "---\344\270\252/\347\247\222", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\277\220\350\241\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234\346\212\225\346\226\231", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\231\344\273\223", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\345\244\215\344\275\215", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\347\216\257\345\242\203\350\256\276\345\256\232", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\347\211\251\346\226\231\347\256\241\347\220\206", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
