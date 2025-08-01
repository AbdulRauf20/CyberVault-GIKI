#ifndef LINKER_ENCRYPTFILE_VIGEN_H
#define LINKER_ENCRYPTFILE_VIGEN_H

#include <QDialog>
#include <QDialog>
#include "main_code.h"  // Include this to use FileEncryptor
#include <QString>
#include <QFileDialog>
#include <QMessageBox>


namespace Ui {
class linker_encryptFile_Vigen;
}

class linker_encryptFile_Vigen : public QDialog
{
    Q_OBJECT

public:
    explicit linker_encryptFile_Vigen(QWidget *parent = nullptr);
    ~linker_encryptFile_Vigen();

private slots:
    void on_pushButton_input_clicked();

    void on_pushButton_output_clicked();

    void on_pushButton_load_clicked();
protected:
    void resizeEvent(QResizeEvent* event) override;

private:
    Ui::linker_encryptFile_Vigen *ui;
    QString inputPath;
    FileEncryptor f;
    QString outputPath;
      Logger l;
};

#endif // LINKER_ENCRYPTFILE_VIGEN_H
