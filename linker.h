#ifndef LINKER_H
#define LINKER_H

#include <QDialog>
#include <QDialog>
#include "main_code.h"  // Include this to use FileEncryptor
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include<iostream>

namespace Ui {
class linker;
}

class linker : public QDialog
{
    Q_OBJECT

public:
    explicit linker(QWidget *parent = nullptr);
    ~linker();


private slots:
    void on_pushButton_openfile_clicked();

    void on_pushButton_load_clicked();

    void on_pushButton_output_clicked();

    // void on_pushButton_loger_clicked();

    // void on_pushButton_clicked();
protected:
    void resizeEvent(QResizeEvent* event) override;

private:
    Ui::linker *ui;
    QString inputPath;
    FileEncryptor f;
    QString outputPath;
    Logger l;
    QString temper ;

};

#endif // LINKER_H
