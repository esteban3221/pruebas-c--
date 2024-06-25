cmake_minimum_required(VERSION 3.25)
project(PruebaMVC)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM gtkmm-4.0)


set(SOURCES
    main.cpp
    controller.cpp
    my_window.cpp
    view.cpp
)

include_directories(include 
                    include/
)


add_executable(PruebaMVC ${SOURCES})

target_link_libraries(PruebaMVC 
                        PUBLIC PRIVATE 
                        ${GTKMM_LIBRARIES}
)
target_include_directories(PruebaMVC PRIVATE ${GTKMM_INCLUDE_DIRS})