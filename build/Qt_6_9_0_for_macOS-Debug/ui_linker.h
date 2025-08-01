/********************************************************************************
** Form generated from reading UI file 'linker.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKER_H
#define UI_LINKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_linker
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPushButton *pushButton_openfile;
    QLabel *label;
    QPushButton *pushButton_output;
    QLabel *label_3;
    QLineEdit *lineEdit_key;
    QPushButton *pushButton_load;

    void setupUi(QDialog *linker)
    {
        if (linker->objectName().isEmpty())
            linker->setObjectName("linker");
        linker->resize(762, 563);
        groupBox = new QGroupBox(linker);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(280, 140, 211, 251));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        pushButton_openfile = new QPushButton(groupBox);
        pushButton_openfile->setObjectName("pushButton_openfile");

        verticalLayout->addWidget(pushButton_openfile);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton_output = new QPushButton(groupBox);
        pushButton_output->setObjectName("pushButton_output");

        verticalLayout->addWidget(pushButton_output);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_key = new QLineEdit(groupBox);
        lineEdit_key->setObjectName("lineEdit_key");

        verticalLayout->addWidget(lineEdit_key);

        pushButton_load = new QPushButton(linker);
        pushButton_load->setObjectName("pushButton_load");
        pushButton_load->setGeometry(QRect(340, 400, 91, 32));

        retranslateUi(linker);

        QMetaObject::connectSlotsByName(linker);
    } // setupUi

    void retranslateUi(QDialog *linker)
    {
        linker->setWindowTitle(QCoreApplication::translate("linker", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("linker", "Input File ", nullptr));
        pushButton_openfile->setText(QCoreApplication::translate("linker", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("linker", "output File", nullptr));
        pushButton_output->setText(QCoreApplication::translate("linker", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("linker", "key", nullptr));
        pushButton_load->setText(QCoreApplication::translate("linker", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linker: public Ui_linker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKER_H
