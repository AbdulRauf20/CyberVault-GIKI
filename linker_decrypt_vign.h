#ifndef LINKER_DECRYPT_VIGN_H
#define LINKER_DECRYPT_VIGN_H

#include <QDialog>
#include <QDialog>
#include "main_code.h"  // Include this to use FileEncryptor
#include <QString>
#include <QFileDialog>
#include <QMessageBox>


namespace Ui {
class linker_Decrypt_vign;
}

class linker_Decrypt_vign : public QDialog
{
    Q_OBJECT

public:
    explicit linker_Decrypt_vign(QWidget *parent = nullptr);
    ~linker_Decrypt_vign();

private slots:
    void on_pushButton_input_clicked();

    void on_pushButton_output_clicked();

    void on_pushButton_load_clicked();
protected:
    void resizeEvent(QResizeEvent* event) override;
private:
    Ui::linker_Decrypt_vign *ui;
    QString inputPath;
    FileEncryptor f;
    QString outputPath;
      Logger l;
};

#endif // LINKER_DECRYPT_VIGN_H
