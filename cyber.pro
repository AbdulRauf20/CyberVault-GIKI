QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dec_link.cpp \
    extended_linker_pic.cpp \
    linker.cpp \
    linker_breachpass.cpp \
    linker_decrypt_vign.cpp \
    linker_encryptfile_vigen.cpp \
    linker_password.cpp \
    linker_pic.cpp \
    main.cpp \
    main_code.cpp \
    mainwindow.cpp

HEADERS += \
    dec_link.h \
    extended_linker_pic.h \
    linker.h \
    linker_breachpass.h \
    linker_decrypt_vign.h \
    linker_encryptfile_vigen.h \
    linker_password.h \
    linker_pic.h \
    main_code.h \
    mainwindow.h

FORMS += \
    dec_link.ui \
    extended_linker_pic.ui \
    linker.ui \
    linker_breachpass.ui \
    linker_decrypt_vign.ui \
    linker_encryptfile_vigen.ui \
    linker_password.ui \
    linker_pic.ui \
    main_code.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    breached_passwords.txt \
    logger.txt

RESOURCES += \
    FONT.qrc \
    main_pic.qrc
