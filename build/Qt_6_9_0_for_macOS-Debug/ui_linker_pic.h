/********************************************************************************
** Form generated from reading UI file 'linker_pic.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKER_PIC_H
#define UI_LINKER_PIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_linker_pic
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_maker;
    QPushButton *pushButton_extract;

    void setupUi(QDialog *linker_pic)
    {
        if (linker_pic->objectName().isEmpty())
            linker_pic->setObjectName("linker_pic");
        linker_pic->resize(640, 480);
        groupBox = new QGroupBox(linker_pic);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(210, 170, 221, 151));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_maker = new QPushButton(groupBox);
        pushButton_maker->setObjectName("pushButton_maker");

        verticalLayout->addWidget(pushButton_maker);

        pushButton_extract = new QPushButton(groupBox);
        pushButton_extract->setObjectName("pushButton_extract");

        verticalLayout->addWidget(pushButton_extract);


        retranslateUi(linker_pic);

        QMetaObject::connectSlotsByName(linker_pic);
    } // setupUi

    void retranslateUi(QDialog *linker_pic)
    {
        linker_pic->setWindowTitle(QCoreApplication::translate("linker_pic", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton_maker->setText(QCoreApplication::translate("linker_pic", "Encode", nullptr));
        pushButton_extract->setText(QCoreApplication::translate("linker_pic", "Decode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linker_pic: public Ui_linker_pic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKER_PIC_H
