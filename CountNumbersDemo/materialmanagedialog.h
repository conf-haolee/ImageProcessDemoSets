#ifndef MATERIALMANAGEDIALOG_H
#define MATERIALMANAGEDIALOG_H

#include <QDialog>

namespace Ui {
class MaterialManageDialog;
}

class MaterialManageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MaterialManageDialog(QWidget *parent = nullptr);
    ~MaterialManageDialog();

private slots:
    void on_pushButton_11_clicked();

private:
    Ui::MaterialManageDialog *ui;
};

#endif // MATERIALMANAGEDIALOG_H
