cmake_minimum_required(VERSION 3.21)

project(HomeDigitalCenter VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(HomeDigitalCenter
    app/main.cpp
    app/Application.cpp
    app/Application.h
    app/MainWindow.cpp
    app/MainWindow.h

    core/CoreManager.cpp
    core/CoreManager.h
    core/ConfigManager.cpp
    core/ConfigManager.h
    core/PluginManager.cpp
    core/PluginManager.h
    core/RuntimeContext.cpp
    core/RuntimeContext.h
    core/ServiceManager.cpp
    core/ServiceManager.h
    core/PluginInterface.h

    modules/jellyfin/JellyfinModule.cpp
    modules/jellyfin/JellyfinModule.h
    modules/jellyfin/JellyfinClient.cpp
    modules/aplayer/APlayerModule.cpp
    modules/aplayer/APlayerModule.h
    modules/readest/ReadestModule.cpp
    modules/readest/ReadestModule.h
    modules/ffmpeg/FFmpegService.cpp
    modules/ffmpeg/FFmpegService.h
)

target_link_libraries(HomeDigitalCenter PRIVATE Qt6::Widgets)
