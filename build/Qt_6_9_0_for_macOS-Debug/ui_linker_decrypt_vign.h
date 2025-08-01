/********************************************************************************
** Form generated from reading UI file 'linker_decrypt_vign.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKER_DECRYPT_VIGN_H
#define UI_LINKER_DECRYPT_VIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_linker_Decrypt_vign
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_input;
    QLabel *label_2;
    QPushButton *pushButton_output;
    QLabel *label_3;
    QLineEdit *lineEdit_key;
    QPushButton *pushButton_load;

    void setupUi(QDialog *linker_Decrypt_vign)
    {
        if (linker_Decrypt_vign->objectName().isEmpty())
            linker_Decrypt_vign->setObjectName("linker_Decrypt_vign");
        linker_Decrypt_vign->resize(640, 480);
        groupBox = new QGroupBox(linker_Decrypt_vign);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(240, 100, 155, 230));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton_input = new QPushButton(groupBox);
        pushButton_input->setObjectName("pushButton_input");

        verticalLayout->addWidget(pushButton_input);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        pushButton_output = new QPushButton(groupBox);
        pushButton_output->setObjectName("pushButton_output");

        verticalLayout->addWidget(pushButton_output);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_key = new QLineEdit(groupBox);
        lineEdit_key->setObjectName("lineEdit_key");

        verticalLayout->addWidget(lineEdit_key);

        pushButton_load = new QPushButton(linker_Decrypt_vign);
        pushButton_load->setObjectName("pushButton_load");
        pushButton_load->setGeometry(QRect(270, 340, 101, 32));

        retranslateUi(linker_Decrypt_vign);

        QMetaObject::connectSlotsByName(linker_Decrypt_vign);
    } // setupUi

    void retranslateUi(QDialog *linker_Decrypt_vign)
    {
        linker_Decrypt_vign->setWindowTitle(QCoreApplication::translate("linker_Decrypt_vign", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("linker_Decrypt_vign", "Input File", nullptr));
        pushButton_input->setText(QCoreApplication::translate("linker_Decrypt_vign", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("linker_Decrypt_vign", "OutPut File", nullptr));
        pushButton_output->setText(QCoreApplication::translate("linker_Decrypt_vign", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("linker_Decrypt_vign", "Key", nullptr));
        pushButton_load->setText(QCoreApplication::translate("linker_Decrypt_vign", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linker_Decrypt_vign: public Ui_linker_Decrypt_vign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKER_DECRYPT_VIGN_H
