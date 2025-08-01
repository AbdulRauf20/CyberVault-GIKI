#include "extended_linker_pic.h"
#include "ui_extended_linker_pic.h"
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include<string>
#include"main_code.h"
extended_linker_pic::extended_linker_pic(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::extended_linker_pic)
{
    ui->setupUi(this);

    this->setStyleSheet("MainWindow {"
                        "background-image: url(:/background.png);"
                        "background-position: center;"
                        "background-repeat: no-repeat;"
                        "background-attachment: fixed;"
                        "background-size: cover;"
                        "}");
    ui->groupBox->setStyleSheet("QGroupBox {"
                                "background-color: rgba(0, 0, 0, 150);"
                                "color: white;"
                                "border: 2px solid gray;"
                                "border-radius: 10px;"
                                "margin-top: 1ex;"
                                "font: bold 12px;"
                                "padding: 10px;"
                                "}");

}

extended_linker_pic::~extended_linker_pic()
{
    delete ui;
}

void extended_linker_pic::on_pushButton_clicked()
{
    inputPath = QFileDialog::getOpenFileName(this, "Open Image File", QDir::homePath(), "Image Files (*.bmp *.jpg *.jpeg *.png);;All Files (*)");


}

void extended_linker_pic::resizeEvent(QResizeEvent* event) {
    QPixmap bkgnd(":/new/prefix1/IMG_2157.JPG");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette p = this->palette();
    p.setBrush(QPalette::Window, bkgnd);
    this->setPalette(p);

    QDialog::resizeEvent(event);  // ✅ Correct base class call
        // Call base implementation
}


void extended_linker_pic::on_pushButton_2_clicked()
{
    outputPath = QFileDialog::getOpenFileName(this, "Open Image File", QDir::homePath(), "Image Files (*.bmp *.jpg *.jpeg *.png);;All Files (*)");

}

void extended_linker_pic::on_pushButton_load_clicked()
{
    QString userPassword = ui->lineEdit->text();

    bool checker = steg.encodeMessage(inputPath.toStdString(), outputPath.toStdString() , userPassword.toStdString());
    if(checker ){
        QMessageBox::information(this,"SuccessFull","You Password Has been Encoded Succesfully in the image");
    }
    else{

            QMessageBox::warning(this,"Error","You Password Has Not been Encoded Succesfully in the image");

    }
    this->close();
}

