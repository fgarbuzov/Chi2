#-------------------------------------------------
#
# Project created by QtCreator 2016-08-24T17:50:13
#
#-------------------------------------------------

QT       += sql

QT       -= gui

TARGET = StatisticsCalc
TEMPLATE = lib

DEFINES += STATISTICSCALC_LIBRARY

SOURCES += \
    dbinteraction.cpp \
    chi2calculator.cpp \
    abstractcalculator.cpp

HEADERS +=\
        StatisticsCalc_global.h \
    sample.h \
    dbinterañtion.h \
    chi2calculator.h \
    abstractcalculator.h

symbian {
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE6E77C5A
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = StatisticsCalc.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
