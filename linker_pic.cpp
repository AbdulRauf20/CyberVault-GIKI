#include "linker_pic.h"
#include "ui_linker_pic.h"
#include"main_code.h"
#include"extended_linker_pic.h"
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <string>
#include <QLabel>                      // For QLabel
#include <QFont>                       // For font settings
#include <QFontDatabase>              // For loading custom fonts
#include <QGraphicsDropShadowEffect>  // For the glow effect
#include <QApplication>
#include<QPixmap>
#include <QApplication>
#include<QPixmap>

linker_pic::linker_pic(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::linker_pic)
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



    QLabel *label = new QLabel("Image Encoder", this);
    label->setFixedSize(300, 40);  // Optional: set label size


    int x = (this->width() - label->width() -300) / 2;
    int y = 20;  // 10 px from top
    label->move(x, y);


    // label->setAlignment(Qt::AlignCenter); 2;
    label->move(x, y);

    int fontId = QFontDatabase::addApplicationFont(":/main_font/Orbitron-VariableFont_wght.ttf");
    if (fontId != -1) {
        QString fontFamily = QFontDatabase::applicationFontFamilies(fontId).at(0);
        QFont font(fontFamily, 24); // Font size
        label->setFont(font);
    }
    QGraphicsDropShadowEffect *glow = new QGraphicsDropShadowEffect;
    glow->setBlurRadius(25);                // Softness of the glow
    glow->setOffset(0);                     // Centered shadow
    glow->setColor(QColor("#00f0ff"));      // Electric cyan color

    label->setGraphicsEffect(glow);

}

linker_pic::~linker_pic()
{
    delete ui;
}

void linker_pic::on_pushButton_maker_clicked()
{
    extended_linker_pic dialog(this); // Pass 'this' to make it modal
    dialog.exec();


}
void linker_pic::resizeEvent(QResizeEvent* event) {
    QPixmap bkgnd(":/new/prefix1/9DA08885-8D8F-49B1-9BD0-68631A88BB81.GIF");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette p = this->palette();
    p.setBrush(QPalette::Window, bkgnd);
    this->setPalette(p);

    QDialog::resizeEvent(event);  // ✅ Correct base class call
        // Call base implementation
}


void linker_pic::on_pushButton_extract_clicked()
{   Steganography steg;
    QString inputPath = QFileDialog::getOpenFileName(this, "Open Image File", QDir::homePath(), "Image Files (*.bmp *.jpg *.jpeg *.png);;All Files (*)");
    string temp = steg.decodeMessage(inputPath.toStdString());
    QString qStr = QString::fromStdString(temp);
    QMessageBox::information(this,"Succesfull",qStr);
    this->close();

}

