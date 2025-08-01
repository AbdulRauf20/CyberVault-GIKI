/********************************************************************************
** Form generated from reading UI file 'linker_password.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKER_PASSWORD_H
#define UI_LINKER_PASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_linker_password
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_check;

    void setupUi(QDialog *linker_password)
    {
        if (linker_password->objectName().isEmpty())
            linker_password->setObjectName("linker_password");
        linker_password->resize(640, 480);
        groupBox = new QGroupBox(linker_password);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(180, 140, 311, 141));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 58, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Optima")});
        font.setBold(true);
        label->setFont(font);
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(100, 50, 118, 21));
        pushButton_check = new QPushButton(linker_password);
        pushButton_check->setObjectName("pushButton_check");
        pushButton_check->setGeometry(QRect(280, 290, 101, 32));
        pushButton_check->setFont(font);

        retranslateUi(linker_password);

        QMetaObject::connectSlotsByName(linker_password);
    } // setupUi

    void retranslateUi(QDialog *linker_password)
    {
        linker_password->setWindowTitle(QCoreApplication::translate("linker_password", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("linker_password", "Passward", nullptr));
        pushButton_check->setText(QCoreApplication::translate("linker_password", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linker_password: public Ui_linker_password {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKER_PASSWORD_H
