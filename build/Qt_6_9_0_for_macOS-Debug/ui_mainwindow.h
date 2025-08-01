/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_encrypt_xor;
    QPushButton *pushButton_decrypt_xor;
    QPushButton *pushButton_encryptFile_Vige;
    QPushButton *pushButton_DecryptFile_Vigen;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_breachPass;
    QPushButton *pushButton_password;
    QPushButton *pushButton_ShowLogs;
    QPushButton *pushButton_picture;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(860, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_encrypt_xor = new QPushButton(groupBox);
        pushButton_encrypt_xor->setObjectName("pushButton_encrypt_xor");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_encrypt_xor->setFont(font1);

        verticalLayout->addWidget(pushButton_encrypt_xor);

        pushButton_decrypt_xor = new QPushButton(groupBox);
        pushButton_decrypt_xor->setObjectName("pushButton_decrypt_xor");
        pushButton_decrypt_xor->setFont(font1);

        verticalLayout->addWidget(pushButton_decrypt_xor);

        pushButton_encryptFile_Vige = new QPushButton(groupBox);
        pushButton_encryptFile_Vige->setObjectName("pushButton_encryptFile_Vige");
        pushButton_encryptFile_Vige->setFont(font1);

        verticalLayout->addWidget(pushButton_encryptFile_Vige);

        pushButton_DecryptFile_Vigen = new QPushButton(groupBox);
        pushButton_DecryptFile_Vigen->setObjectName("pushButton_DecryptFile_Vigen");
        pushButton_DecryptFile_Vigen->setFont(font1);

        verticalLayout->addWidget(pushButton_DecryptFile_Vigen);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_breachPass = new QPushButton(groupBox_2);
        pushButton_breachPass->setObjectName("pushButton_breachPass");
        pushButton_breachPass->setFont(font1);

        verticalLayout_2->addWidget(pushButton_breachPass);

        pushButton_password = new QPushButton(groupBox_2);
        pushButton_password->setObjectName("pushButton_password");
        pushButton_password->setFont(font1);

        verticalLayout_2->addWidget(pushButton_password);

        pushButton_ShowLogs = new QPushButton(groupBox_2);
        pushButton_ShowLogs->setObjectName("pushButton_ShowLogs");
        pushButton_ShowLogs->setFont(font1);

        verticalLayout_2->addWidget(pushButton_ShowLogs);

        pushButton_picture = new QPushButton(groupBox_2);
        pushButton_picture->setObjectName("pushButton_picture");
        pushButton_picture->setFont(font1);

        verticalLayout_2->addWidget(pushButton_picture);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 860, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushButton_encrypt_xor->setText(QCoreApplication::translate("MainWindow", "encrypt", nullptr));
        pushButton_decrypt_xor->setText(QCoreApplication::translate("MainWindow", "decrypt", nullptr));
        pushButton_encryptFile_Vige->setText(QCoreApplication::translate("MainWindow", "Encrypt File (Vigen\303\250re)", nullptr));
        pushButton_DecryptFile_Vigen->setText(QCoreApplication::translate("MainWindow", "Decrypt File (Vigenere)", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_breachPass->setText(QCoreApplication::translate("MainWindow", "Breach Pass", nullptr));
        pushButton_password->setText(QCoreApplication::translate("MainWindow", "Password checker", nullptr));
        pushButton_ShowLogs->setText(QCoreApplication::translate("MainWindow", "Show Logs", nullptr));
        pushButton_picture->setText(QCoreApplication::translate("MainWindow", "Picture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
