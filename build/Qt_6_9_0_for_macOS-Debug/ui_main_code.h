/********************************************************************************
** Form generated from reading UI file 'main_code.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_CODE_H
#define UI_MAIN_CODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_main_code
{
public:

    void setupUi(QDialog *main_code)
    {
        if (main_code->objectName().isEmpty())
            main_code->setObjectName("main_code");
        main_code->resize(640, 480);

        retranslateUi(main_code);

        QMetaObject::connectSlotsByName(main_code);
    } // setupUi

    void retranslateUi(QDialog *main_code)
    {
        main_code->setWindowTitle(QCoreApplication::translate("main_code", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_code: public Ui_main_code {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_CODE_H
