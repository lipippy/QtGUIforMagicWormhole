QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

GTEST_DIR = $$PWD/googletest/googletest
GMOCK_DIR = $$PWD/googletest/googlemock

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/magic_wormhole.cpp \
    src/main.cpp \
    src/widget.cpp \
    $$GTEST_DIR/src/gtest-all.cc \
    $$GMOCK_DIR/src/gmock-all.cc \
    test/tst_magic_wormhole.cpp


HEADERS += \
    src/magic_wormhole.h \
    src/widget.h

FORMS += \
    res/widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/magic-wormhole.rs/target/release/ -lwormhole_rs_lib.dll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/magic-wormhole.rs/target/debug/ -lwormhole_rs_lib.dll
else:unix: LIBS += -L$$PWD/magic-wormhole.rs/target/ -lwormhole_rs_lib.dll

INCLUDEPATH += $$PWD/magic-wormhole.rs/target/release
DEPENDPATH += $$PWD/magic-wormhole.rs/target/release


INCLUDEPATH += $$GTEST_DIR/include
INCLUDEPATH += $$GTEST_DIR
INCLUDEPATH += $$GMOCK_DIR/include
INCLUDEPATH += $$GMOCK_DIR

# Additional settings
QMAKE_CXXFLAGS += -DGTEST_HAS_PTHREAD=1
