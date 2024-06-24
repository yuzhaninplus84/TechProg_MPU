QT += testlib sql network
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
tst_funcforserver_test.cpp \
    F:\TechProg_MPU\SERVER_FULL\task1.cpp \
    F:\TechProg_MPU\SERVER_FULL\task2.cpp \
    F:\TechProg_MPU\SERVER_FULL\task3.cpp \
    F:\TechProg_MPU\SERVER_FULL\task4.cpp
HEADERS += \
    F:\TechProg_MPU\SERVER_FULL\task1.h \
    F:\TechProg_MPU\SERVER_FULL\task2.h \
    F:\TechProg_MPU\SERVER_FULL\task3.h \
    F:\TechProg_MPU\SERVER_FULL\task4.h
