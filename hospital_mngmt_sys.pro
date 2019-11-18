#-------------------------------------------------
#
# Project created by QtCreator 2017-06-27T09:17:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hospital_mngmt_sys
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        login.cpp \
    mainwindowr.cpp \
    mainwindowp.cpp \
    createnewaccount.cpp \
    departments.cpp \
    patienthistory.cpp \
    doctorschedule.cpp \
    beds.cpp \
    d_painmanagement.cpp \
    birthtoll.cpp \
    deathtoll.cpp \
    bill_r.cpp \
    appointmentform.cpp \
    dischargeslip.cpp \
    medicinelist.cpp \
    billing_p.cpp

HEADERS += \
        login.h \
    mainwindowr.h \
    mainwindowp.h \
    createnewaccount.h \
    departments.h \
    patienthistory.h \
    doctorschedule.h \
    beds.h \
    d_painmanagement.h \
    dischargeslip.h \
    birthtoll.h \
    deathtoll.h \
    bill_r.h \
    appointmentform.h \
    dischargeslip.h \
    medicinelist.h \
    billing_p.h

FORMS += \
        login.ui \
    mainwindowr.ui \
    mainwindowp.ui \
    createnewaccount.ui \
    departments.ui \
    patienthistory.ui \
    doctorschedule.ui \
    beds.ui \
    d_painmanagement.ui \
    birthtoll.ui \
    deathtoll.ui \
    bill_r.ui \
    appointmentform.ui \
    dischargeslip.ui \
    medicinelist.ui \
    billing_p.ui

RESOURCES += \
    resources.qrc
