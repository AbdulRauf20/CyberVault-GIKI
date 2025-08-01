#include "decrypt_linker.h"
#include "ui_decrypt_linker.h"

decrypt_linker::decrypt_linker(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::decrypt_linker)
{
    ui->setupUi(this);
}

decrypt_linker::~decrypt_linker()
{
    delete ui;
}
