/********************************************************************************
** Form generated from reading UI file 'linker_showlogs.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKER_SHOWLOGS_H
#define UI_LINKER_SHOWLOGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_linker_showLogs
{
public:

    void setupUi(QDialog *linker_showLogs)
    {
        if (linker_showLogs->objectName().isEmpty())
            linker_showLogs->setObjectName("linker_showLogs");
        linker_showLogs->resize(640, 480);

        retranslateUi(linker_showLogs);

        QMetaObject::connectSlotsByName(linker_showLogs);
    } // setupUi

    void retranslateUi(QDialog *linker_showLogs)
    {
        linker_showLogs->setWindowTitle(QCoreApplication::translate("linker_showLogs", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linker_showLogs: public Ui_linker_showLogs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKER_SHOWLOGS_H
