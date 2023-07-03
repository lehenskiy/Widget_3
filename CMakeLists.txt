cmake_minimum_required(VERSION 3.25)
project(Widget_3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Widget_3
        main.cpp
        widget.h
        widget.cpp
        figure.h
        figure.cpp
        area.h
        area.cpp
        )
target_link_libraries(Widget_3
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

