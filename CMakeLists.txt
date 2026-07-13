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
    loginpage.h loginpage.cpp loginpage.ui


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
