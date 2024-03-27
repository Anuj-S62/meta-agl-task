TEMPLATE = app
TARGET = agltask
INCLUDEPATH += .

QT += gui widgets

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += agltask.cpp

target.path = /usr/bin
target.files += $${OUT_PWD}/$${TARGET}
target.CONFIG = no_check_exist executable

INSTALLS += target

RESOURCES += \
    resources.qrc