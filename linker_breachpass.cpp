#include "linker_breachpass.h"
#include "ui_linker_breachpass.h"
#include"main_code.h"
#include<string>
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
linker_breachPass::linker_breachPass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::linker_breachPass)
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

    QLabel *label = new QLabel("Breach Password", this);
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

linker_breachPass::~linker_breachPass()
{
    delete ui;
}


void linker_breachPass::resizeEvent(QResizeEvent* event) {
    QPixmap bkgnd(":/new/prefix1/IMG_2149.JPG");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    QPalette p = this->palette();
    p.setBrush(QPalette::Window, bkgnd);
    this->setPalette(p);

    QDialog::resizeEvent(event);  // ✅ Correct base class call
        // Call base implementation
}

void linker_breachPass::on_pushButton_clicked()
{
     PasswordChecker checker;

    QString key = ui->lineEdit_pass->text();
    std::string userPassword = key.toStdString();

     // if used elsewhere

    std::string breachMsg = "";
    std::string suggestion = "";

    // Check if password was breached
    if (checker.isBreached(userPassword)) {
        breachMsg = "This password was found in a breach!\n";
    }

    // Suggest strong password if score is low
    if (checker.getPasswordScore(userPassword) <= 2) {
        suggestion = "Suggested strong password: " + checker.generateStrongPassword() + "\n";
    }

    // Get score and cyber health report
    int score = checker.getPasswordScore(userPassword);
    CyberHealthAnalyzer analyzer("/Users/mianhusnain/cyber/logger.txt", score);
    std::string report = analyzer.showReport();

    // Combine everything into a single message
    QString message = QString::fromStdString(
        breachMsg + suggestion + report + "\nPassword Strength Score (out of 5): " + std::to_string(score)
        );

    // Show the combined message
    QMessageBox::information(this, "Password Analysis", message);
    this->close();
}
