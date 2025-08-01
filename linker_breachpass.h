#ifndef LINKER_BREACHPASS_H
#define LINKER_BREACHPASS_H

#include <QDialog>
#include "main_code.h"  // Include this to use FileEncryptor
#include <QString>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class linker_breachPass;
}

class linker_breachPass : public QDialog
{
    Q_OBJECT

public:
    explicit linker_breachPass(QWidget *parent = nullptr);
    ~linker_breachPass();
protected:
    void resizeEvent(QResizeEvent* event) override;

private slots:
    void on_pushButton_clicked();

private:
    Ui::linker_breachPass *ui;
};

#endif // LINKER_BREACHPASS_H
