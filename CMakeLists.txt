cmake_minimum_required(VERSION 3.16)

project(QtCalculator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick QuickControls2)

qt_standard_project_setup(REQUIRES 6.8)

set(QT_NO_CREATE_LAUNCHSCREEN ON)

qt_add_executable(appQtCalculator
    main.cpp
)

qt_add_qml_module(appQtCalculator
    URI QtCalculator
    VERSION 1.0
    QML_FILES
        Main.qml
        SOURCES sumlogic.h sumlogic.cpp
    IMPORTS
        QtQuick.Controls
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appQtCalculator PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appQtCalculator
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
    XCODE_ATTRIBUTE_LAUNCHSCREEN ""
    QT_IOS_LAUNCH_SCREEN ""
)

target_link_libraries(appQtCalculator
    PRIVATE Qt6::Quick
    PRIVATE Qt6::QuickControls2
)

include(GNUInstallDirs)
install(TARGETS appQtCalculator
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
