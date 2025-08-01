/********************************************************************************
** Form generated from reading UI file 'linker_encryptfile_vigen.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKER_ENCRYPTFILE_VIGEN_H
#define UI_LINKER_ENCRYPTFILE_VIGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_linker_encryptFile_Vigen
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

    void setupUi(QDialog *linker_encryptFile_Vigen)
    {
        if (linker_encryptFile_Vigen->objectName().isEmpty())
            linker_encryptFile_Vigen->setObjectName("linker_encryptFile_Vigen");
        linker_encryptFile_Vigen->resize(640, 480);
        groupBox = new QGroupBox(linker_encryptFile_Vigen);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(240, 120, 155, 218));
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

        pushButton_load = new QPushButton(linker_encryptFile_Vigen);
        pushButton_load->setObjectName("pushButton_load");
        pushButton_load->setGeometry(QRect(270, 340, 101, 32));

        retranslateUi(linker_encryptFile_Vigen);

        QMetaObject::connectSlotsByName(linker_encryptFile_Vigen);
    } // setupUi

    void retranslateUi(QDialog *linker_encryptFile_Vigen)
    {
        linker_encryptFile_Vigen->setWindowTitle(QCoreApplication::translate("linker_encryptFile_Vigen", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("linker_encryptFile_Vigen", "Input File", nullptr));
        pushButton_input->setText(QCoreApplication::translate("linker_encryptFile_Vigen", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("linker_encryptFile_Vigen", "OutPut File", nullptr));
        pushButton_output->setText(QCoreApplication::translate("linker_encryptFile_Vigen", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("linker_encryptFile_Vigen", "Vig-Key", nullptr));
        pushButton_load->setText(QCoreApplication::translate("linker_encryptFile_Vigen", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linker_encryptFile_Vigen: public Ui_linker_encryptFile_Vigen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKER_ENCRYPTFILE_VIGEN_H
