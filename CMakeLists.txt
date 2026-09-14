cmake_minimum_required(VERSION 3.21)

project(HomeDigitalCenter VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(HomeDigitalCenter
    app/main.cpp
    app/MainWindow.cpp
    app/MainWindow.h
    core/CoreManager.cpp
    core/CoreManager.h
    core/PluginInterface.h
)

target_link_libraries(HomeDigitalCenter PRIVATE Qt6::Widgets)
