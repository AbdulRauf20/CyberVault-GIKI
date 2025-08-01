#ifndef EXTENDED_LINKER_PIC_H
#define EXTENDED_LINKER_PIC_H

#include <QDialog>
#include"main_code.h"

namespace Ui {
class extended_linker_pic;
}

class extended_linker_pic : public QDialog
{
    Q_OBJECT

public:
    explicit extended_linker_pic(QWidget *parent = nullptr);
    QString inputPath;
    QString outputPath;
    ~extended_linker_pic();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_load_clicked();
protected:
    void resizeEvent(QResizeEvent* event) override;
private:
    Ui::extended_linker_pic *ui;
    Steganography steg;

};

#endif // EXTENDED_LINKER_PIC_H
