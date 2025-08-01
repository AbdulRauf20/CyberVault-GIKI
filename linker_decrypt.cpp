#include "linker_decrypt.h"
#include "main_code.h"
#include "ui_linker_decrypt.h"

linker::linker_decrypt(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::linker)
{
    ui->setupUi(this);
}

linker::~linker()
{
    delete ui;
}

void linker::on_pushButton_openfile_clicked()
{
    inputPath = QFileDialog::getOpenFileName(this,
                                             "Open Input File",
                                             QDir::homePath(),
                                             "Text Files (*.txt);;All Files (*)");
}

void linker::on_pushButton_output_clicked()
{
    outputPath = QFileDialog::getOpenFileName(this,
                                              "Open Input File",
                                              QDir::homePath(),
                                              "Text Files (*.txt);;All Files (*)");
}

void linker::on_pushButton_load_clicked()
{
    int key = ui->lineEdit_key->text().toInt();

    if (inputPath.isEmpty() || outputPath.isEmpty()) {
        QMessageBox::warning(this,
                             "Input Error",
                             "Please provide input file, output file name, and encryption key.");
        return;
    }

    f.setFileNames(inputPath.toStdString(), outputPath.toStdString());
    f.setKey(key);
    bool failed;

    failed = f.decryptFile();

    if (failed) {
        QMessageBox::critical(this, "Decrypt Failed", "Could not read/write to file.");
    } else {
        QMessageBox::information(this, "Success", "File decrypted successfully!");
    }
}
