cmake_minimum_required(VERSION 3.25)
project(PruebaMVC)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM gtkmm-4.0)
find_package(SQLite3 REQUIRED)
find_library(SQLITE3_LIBRARY sqlite3 REQUIRED)

set(SOURCES
    main.cpp
    my_window.cpp
    sqlite.cpp

    home/view.cpp
    home/controller.cpp
    home/model.cpp

    home/children/task/controller.cpp
    home/children/task/view.cpp
    home/children/task/model.cpp
)

include_directories(include 
                    include/
                    include/home/children/task
                    db/
)


add_executable(PruebaMVC ${SOURCES})

target_link_libraries(PruebaMVC 
                        PUBLIC PRIVATE 
                        ${GTKMM_LIBRARIES}
                        SQLite::SQLite3 
)
target_include_directories(PruebaMVC PRIVATE ${GTKMM_INCLUDE_DIRS})