#include "linker.h"
#include "ui_linker.h"
#include"main_code.h"
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


linker::linker(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::linker)
{
    ui->setupUi(this);
    // QPixmap pix(":/new/prefix1/IMG_2145.JPG");
    // ui->label_pic->setPixmap(pix);
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
    QLabel *label = new QLabel("Encrypt", this);
    label->setFixedSize(300, 40);  // Optional: set label size


    int x = (this->width() - label->width() -400) / 2;
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

linker::~linker()
{
    delete ui;
}

void linker::on_pushButton_openfile_clicked()
{
    inputPath = QFileDialog::getOpenFileName(this, "Open Input File", QDir::homePath(), "Text Files (*.txt);;All Files (*)");

}

void linker::resizeEvent(QResizeEvent* event) {
    QPixmap bkgnd(":/new/prefix1/IMG_2145.JPG");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette p = this->palette();
    p.setBrush(QPalette::Window, bkgnd);
    this->setPalette(p);

    QDialog::resizeEvent(event);  // ✅ Correct base class call
     // Call base implementation
}



void linker::on_pushButton_output_clicked()
{
     outputPath = QFileDialog::getOpenFileName(this, "Open Input File", QDir::homePath(), "Text Files (*.txt);;All Files (*)");
}



// void linker::on_pushButton_loger_clicked()
// {
//     temper = QFileDialog::getOpenFileName(this, "Open Input File", QDir::homePath(), "Text Files (*.txt);;All Files (*)");

// }
// void linker::on_pushButton_clicked()
// {
//     temper = QFileDialog::getOpenFileName(this, "Open Input File", QDir::homePath(), "Text Files (*.txt);;All Files (*)");

// }
void linker::on_pushButton_load_clicked()
{
    // QString path = QDir::currentPath() + "/Logger.txt";
    // l.Loggerset(path.toStdString());
    // cout<< temper.toStdString();

    l.Loggerset("/Users/mianhusnain/cyber/logger.txt");



    int key = ui->lineEdit_key->text().toInt();

    if (inputPath.isEmpty() || outputPath.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please provide input file, output file name, and encryption key.");
        return;
    }
    // cout<< temper.toStdString()<<endl;
    f.setFileNames(inputPath.toStdString(), outputPath.toStdString());
    f.setKey(key);
    bool failed;


    failed = f.encryptFile();


    l.log("Encrypted", inputPath.toStdString());




    if (failed) {
        QMessageBox::critical(this, "Encryption Failed", "Could not read/write to file.");
    } else {
        QMessageBox::information(this, "Success", "File encrypted successfully!");
    }
    this->close();


}














// void linker::on_pushButton_clicked()
// {

// }

