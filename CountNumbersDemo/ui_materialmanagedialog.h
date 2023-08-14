/********************************************************************************
** Form generated from reading UI file 'materialmanagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATERIALMANAGEDIALOG_H
#define UI_MATERIALMANAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaterialManageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_4;
    QWidget *widget_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QCheckBox *checkBox;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QDialog *MaterialManageDialog)
    {
        if (MaterialManageDialog->objectName().isEmpty())
            MaterialManageDialog->setObjectName(QString::fromUtf8("MaterialManageDialog"));
        MaterialManageDialog->resize(719, 602);
        verticalLayout = new QVBoxLayout(MaterialManageDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(MaterialManageDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBox);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(MaterialManageDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(124, 124, 124);"));

        horizontalLayout_3->addWidget(widget_4);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(widget_5);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(MaterialManageDialog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(widget_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_7);

        checkBox = new QCheckBox(widget_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy2.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(checkBox);

        pushButton_8 = new QPushButton(widget_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(widget_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy2.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(widget_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy2.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(widget_3);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy2.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(pushButton_11);


        verticalLayout->addWidget(widget_3);


        retranslateUi(MaterialManageDialog);

        QMetaObject::connectSlotsByName(MaterialManageDialog);
    } // setupUi

    void retranslateUi(QDialog *MaterialManageDialog)
    {
        MaterialManageDialog->setWindowTitle(QCoreApplication::translate("MaterialManageDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MaterialManageDialog", "\347\211\251\346\226\231\345\220\215\347\247\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MaterialManageDialog", "Cliptest", nullptr));

        label_2->setText(QCoreApplication::translate("MaterialManageDialog", "\347\211\251\346\226\231\346\235\241\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("MaterialManageDialog", "\346\226\260\345\273\272\351\205\215\347\275\256", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MaterialManageDialog", "\345\244\215\345\210\266\351\205\215\347\275\256", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MaterialManageDialog", "\351\207\215\345\221\275\345\220\215", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MaterialManageDialog", "\345\244\215\345\210\266\351\205\215\347\275\256", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MaterialManageDialog", "\345\257\274\345\205\245\345\233\276\345\203\217", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MaterialManageDialog", "\347\233\256\345\275\225\346\265\213\350\257\225", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MaterialManageDialog", "\351\207\207\351\233\206\345\233\276\345\203\217", nullptr));
        checkBox->setText(QCoreApplication::translate("MaterialManageDialog", "\344\277\235\345\255\230\351\207\207\351\233\206\345\233\276\345\203\217", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MaterialManageDialog", "\345\220\210\351\200\202", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MaterialManageDialog", "1:1", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MaterialManageDialog", "\350\256\241\346\225\260\346\270\205\351\233\266", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MaterialManageDialog", "\345\256\214\346\210\220\350\256\276\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MaterialManageDialog: public Ui_MaterialManageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATERIALMANAGEDIALOG_H
