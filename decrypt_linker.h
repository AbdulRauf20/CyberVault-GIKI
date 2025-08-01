#ifndef DECRYPT_LINKER_H
#define DECRYPT_LINKER_H

#include <QDialog>

namespace Ui {
class decrypt_linker;
}

class decrypt_linker : public QDialog
{
    Q_OBJECT

public:
    explicit decrypt_linker(QWidget *parent = nullptr);
    ~decrypt_linker();

private:
    Ui::decrypt_linker *ui;
};

#endif // DECRYPT_LINKER_H
