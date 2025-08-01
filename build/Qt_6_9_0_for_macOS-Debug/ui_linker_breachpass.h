/********************************************************************************
** Form generated from reading UI file 'linker_breachpass.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKER_BREACHPASS_H
#define UI_LINKER_BREACHPASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_linker_breachPass
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_pass;
    QLabel *label;

    void setupUi(QDialog *linker_breachPass)
    {
        if (linker_breachPass->objectName().isEmpty())
            linker_breachPass->setObjectName("linker_breachPass");
        linker_breachPass->resize(640, 480);
        pushButton = new QPushButton(linker_breachPass);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 270, 101, 32));
        groupBox = new QGroupBox(linker_breachPass);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(180, 130, 271, 131));
        lineEdit_pass = new QLineEdit(groupBox);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setGeometry(QRect(90, 50, 113, 21));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 61, 16));

        retranslateUi(linker_breachPass);

        QMetaObject::connectSlotsByName(linker_breachPass);
    } // setupUi

    void retranslateUi(QDialog *linker_breachPass)
    {
        linker_breachPass->setWindowTitle(QCoreApplication::translate("linker_breachPass", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("linker_breachPass", "Check", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("linker_breachPass", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linker_breachPass: public Ui_linker_breachPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKER_BREACHPASS_H
