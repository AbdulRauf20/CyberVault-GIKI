#ifndef LINKER_PASSWORD_H
#define LINKER_PASSWORD_H

#include <QDialog>
#include "main_code.h"  // Include this to use FileEncryptor
#include <QString>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class linker_password;
}

class linker_password : public QDialog
{
    Q_OBJECT

public:
    explicit linker_password(QWidget *parent = nullptr);
    ~linker_password();

private slots:
    void on_pushButton_check_clicked();
protected:
    void resizeEvent(QResizeEvent* event) override;

private:
    Ui::linker_password *ui;
    PasswordChecker checker;
};

#endif // LINKER_PASSWORD_H
