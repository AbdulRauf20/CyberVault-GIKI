#ifndef LINKER_PIC_H
#define LINKER_PIC_H

#include <QDialog>

namespace Ui {
class linker_pic;
}

class linker_pic : public QDialog
{
    Q_OBJECT

public:
    explicit linker_pic(QWidget *parent = nullptr);
    ~linker_pic();

private slots:
    void on_pushButton_maker_clicked();

    void on_pushButton_extract_clicked();
protected:
    void resizeEvent(QResizeEvent* event) override;
private:
    Ui::linker_pic *ui;
};

#endif // LINKER_PIC_H
