#include "materialmanagedialog.h"
#include "ui_materialmanagedialog.h"

MaterialManageDialog::MaterialManageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MaterialManageDialog)
{
    ui->setupUi(this);
}

MaterialManageDialog::~MaterialManageDialog()
{
    delete ui;
}

void MaterialManageDialog::on_pushButton_11_clicked()
{
    this->accept();
}

