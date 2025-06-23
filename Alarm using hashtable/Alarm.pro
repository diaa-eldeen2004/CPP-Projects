# .pro file for the Alarm Clock Qt Project

QT += core gui widgets

# The CONFIG variable is set to ensure a widget-based GUI application
CONFIG += debug console

# This defines the main source files and header files for the project
SOURCES += main.cpp \
           alarmclock.cpp

HEADERS += alarmclock.h

# UI files (if any) should also be included here (none for this project, but just in case)
# FORMS +=

# The TARGET specifies the name of the application (e.g., Alarm)
TARGET = Alarm
# The version of Qt to use (optional, here we're using default Qt)
VERSION = 1.0.0
