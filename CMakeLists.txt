cmake_minimum_required(VERSION 3.19)
project(PlaTwoButCooler LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(PlaTwoButCooler
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui

    resources.qrc
    registerwindow.h registerwindow.cpp registerwindow.ui
    games/Game.h games/Game.cpp

    models/User.h models/User.cpp
    games/DotsAndBoxes/Line.h
    games/DotsAndBoxes/Box.h
    games/DotsAndBoxes/DotsAndBoxes.h games/DotsAndBoxes/DotsAndBoxes.cpp
    models/GameResult.h




)

target_link_libraries(PlaTwoButCooler
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS PlaTwoButCooler
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET PlaTwoButCooler
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
