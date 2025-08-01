/********************************************************************************
** Form generated from reading UI file 'dec_link.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEC_LINK_H
#define UI_DEC_LINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dec_link
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_openfile;
    QLabel *label_2;
    QPushButton *pushButton_load;
    QLabel *label_3;
    QLineEdit *lineEdit_key;
    QPushButton *pushButton_done;

    void setupUi(QDialog *dec_link)
    {
        if (dec_link->objectName().isEmpty())
            dec_link->setObjectName("dec_link");
        dec_link->resize(640, 480);
        groupBox = new QGroupBox(dec_link);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(240, 80, 155, 218));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton_openfile = new QPushButton(groupBox);
        pushButton_openfile->setObjectName("pushButton_openfile");

        verticalLayout->addWidget(pushButton_openfile);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        pushButton_load = new QPushButton(groupBox);
        pushButton_load->setObjectName("pushButton_load");

        verticalLayout->addWidget(pushButton_load);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_key = new QLineEdit(groupBox);
        lineEdit_key->setObjectName("lineEdit_key");

        verticalLayout->addWidget(lineEdit_key);

        pushButton_done = new QPushButton(dec_link);
        pushButton_done->setObjectName("pushButton_done");
        pushButton_done->setGeometry(QRect(270, 300, 101, 32));

        retranslateUi(dec_link);

        QMetaObject::connectSlotsByName(dec_link);
    } // setupUi

    void retranslateUi(QDialog *dec_link)
    {
        dec_link->setWindowTitle(QCoreApplication::translate("dec_link", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("dec_link", "TextLabel", nullptr));
        pushButton_openfile->setText(QCoreApplication::translate("dec_link", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("dec_link", "TextLabel", nullptr));
        pushButton_load->setText(QCoreApplication::translate("dec_link", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("dec_link", "TextLabel", nullptr));
        pushButton_done->setText(QCoreApplication::translate("dec_link", "Load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dec_link: public Ui_dec_link {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEC_LINK_H
