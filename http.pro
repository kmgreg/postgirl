QT += network widgets

HEADERS += httpwindow.h \
    requestwindow.h
SOURCES += httpwindow.cpp \
           main.cpp \
           requestwindow.cpp
FORMS += authenticationdialog.ui \
    requestwindow.ui

# install
target.path = ./network/http
INSTALLS += target
