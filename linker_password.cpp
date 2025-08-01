#include "linker_password.h"
#include "ui_linker_password.h"
#include"main_code.h"
#include<QString>
#include<QMessageBox>
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
linker_password::linker_password(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::linker_password)
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
    QLabel *label = new QLabel("Password Health", this);
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

linker_password::~linker_password()
{
    delete ui;
}


void linker_password::resizeEvent(QResizeEvent* event) {
    QPixmap bkgnd(":/new/prefix1/IMG_2146.JPG");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette p = this->palette();
    p.setBrush(QPalette::Window, bkgnd);
    this->setPalette(p);

    QDialog::resizeEvent(event);  // ✅ Correct base class call
        // Call base implementation
}

void linker_password::on_pushButton_check_clicked()
{
    // QString key = ui->lineEdit_password->text();
    // string userPassword = key.toStdString();

    // int score = checker.analyzePassword(userPassword);
    // string strength;
    // if (score <= 2) strength =  "Weak";
    // else if (score <= 4) strength =  "Moderate";
    // else strength =  "Strong";


    // string pass;
    // if (checker.isBreached(userPassword)) {
    //     cout << " This password was found in a breach!\n";
    // }
    // if (checker.getPasswordScore(userPassword) <= 2) {
    //     /*cout << " Suggested strong password: " <<*/
    //     string = checker.generateStrongPassword() << endl;
    // }
    // QMessageBox::information(this,"PASSWORD","Strength" strength "score" score )

    // {
    //     int score = checker.getPasswordScore(userPassword);
    //     // CyberHealthAnalyzer analyzer("vault_log.txt", score);
    //     // analyzer.showReport();
    //     cout<< score ;
    // }


    QString key = ui->lineEdit_password->text();
    std::string userPassword = key.toStdString();

    int score = checker.getPasswordScore(userPassword);
    std::string strength = checker.getPasswordStrength(score);

    QString message = QString("Password Strength: %1\nScore (out of 5): %2")
                          .arg(QString::fromStdString(strength))
                          .arg(score);

    // Check for breach
    if (checker.isBreached(userPassword)) {
        message += "\nWarning: This password was found in a breach!";
    }

    // Suggest strong password if weak
    if (score <= 2) {
        std::string suggestion = checker.generateStrongPassword();
        message += "\nSuggested strong password: " + QString::fromStdString(suggestion);
    }
    CyberHealthAnalyzer analyzer("loggertxt", score);
    analyzer.showReport();


    // Show message box
    QMessageBox::information(this, "PASSWORD ANALYSIS", message);
    this->close();

}

