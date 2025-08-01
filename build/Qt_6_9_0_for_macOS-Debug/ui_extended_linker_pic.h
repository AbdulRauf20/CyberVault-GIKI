/********************************************************************************
** Form generated from reading UI file 'extended_linker_pic.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENDED_LINKER_PIC_H
#define UI_EXTENDED_LINKER_PIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_extended_linker_pic
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_load;

    void setupUi(QDialog *extended_linker_pic)
    {
        if (extended_linker_pic->objectName().isEmpty())
            extended_linker_pic->setObjectName("extended_linker_pic");
        extended_linker_pic->resize(640, 480);
        groupBox = new QGroupBox(extended_linker_pic);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(230, 120, 191, 231));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        pushButton_load = new QPushButton(extended_linker_pic);
        pushButton_load->setObjectName("pushButton_load");
        pushButton_load->setGeometry(QRect(280, 360, 101, 32));

        retranslateUi(extended_linker_pic);

        QMetaObject::connectSlotsByName(extended_linker_pic);
    } // setupUi

    void retranslateUi(QDialog *extended_linker_pic)
    {
        extended_linker_pic->setWindowTitle(QCoreApplication::translate("extended_linker_pic", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("extended_linker_pic", "Input Img", nullptr));
        pushButton->setText(QCoreApplication::translate("extended_linker_pic", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("extended_linker_pic", "OutPut Img", nullptr));
        pushButton_2->setText(QCoreApplication::translate("extended_linker_pic", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("extended_linker_pic", "Password", nullptr));
        pushButton_load->setText(QCoreApplication::translate("extended_linker_pic", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class extended_linker_pic: public Ui_extended_linker_pic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENDED_LINKER_PIC_H
