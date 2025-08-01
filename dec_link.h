#ifndef DEC_LINK_H
#define DEC_LINK_H

#include <QDialog>
#include <QDialog>
#include "main_code.h"  // Include this to use FileEncryptor
#include <QString>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class dec_link;
}

class dec_link : public QDialog
{
    Q_OBJECT

public:
    explicit dec_link(QWidget *parent = nullptr);
    ~dec_link();
private slots:
    void on_pushButton_openfile_clicked();

    void on_pushButton_load_clicked();

    void on_pushButton_done_clicked();
protected:
    void resizeEvent(QResizeEvent* event) override;

private:
   Ui::dec_link *ui;
    QString inputPath;
    FileEncryptor f;
    QString outputPath;
      Logger l;
};



#endif // DEC_LINK_H
