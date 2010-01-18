# -------------------------------------------------
# Project created by QtCreator 2009-11-08T00:59:33
# -------------------------------------------------
QT += sql \
    gui \
    core
TARGET = bdase_san
CONFIG += windows \
    qt \
    release \
    plugin
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    Dialog.cpp \
    settings.cpp
HEADERS += mainwindow.h \
    Dialog.h \
    settings.h
FORMS += mainwindow.ui \
    Dialog.ui \
    settings.ui
RESOURCES += resource.qrc
