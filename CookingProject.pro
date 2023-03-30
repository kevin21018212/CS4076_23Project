QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    FoodClasses/diet.cpp \
    FoodClasses/ingredient.cpp \
    FoodClasses/type.cpp \
    Meals/breakfastsandwhich.cpp \
    Meals/chickendinner.cpp \
    Meals/churro.cpp \
    Meals/diaryfreecrepe.cpp \
    Meals/lunchsandwich.cpp \
    Meals/omlet.cpp \
    Meals/pancakes.cpp \
    Meals/simplepasta.cpp \
    Meals/turkeywrap.cpp \
    Meals/veganlunch.cpp \
    Storage/arraylist.cpp \
    Storage/listaccess.cpp \
    Storage/mealloader.cpp \
    Storage/mealtemplate.cpp \
    additem.cpp \
    edititem.cpp \
    main.cpp \
    mainwindow.cpp \
    mealdisplay.cpp \
    selectmenu.cpp

HEADERS += \
    FoodClasses/diet.h \
    FoodClasses/ingredient.h \
    FoodClasses/type.h \
    Meals/breakfastsandwhich.h \
    Meals/chickendinner.h \
    Meals/churro.h \
    Meals/diaryfreecrepe.h \
    Meals/lunchsandwich.h \
    Meals/omlet.h \
    Meals/pancakes.h \
    Meals/simplepasta.h \
    Meals/turkeywrap.h \
    Meals/veganlunch.h \
    Storage/arraylist.h \
    Storage/listaccess.h \
    Storage/mealloader.h \
    Storage/mealtemplate.h \
    additem.h \
    edititem.h \
    mainwindow.h \
    mealdisplay.h \
    selectmenu.h

FORMS += \
    additem.ui \
    edititem.ui \
    mainwindow.ui \
    mealdisplay.ui \
    selectmenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
