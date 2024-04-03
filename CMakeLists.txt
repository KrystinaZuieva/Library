cmake_minimum_required(VERSION 3.26)
project(library)

set(CMAKE_CXX_STANDARD 23)

add_executable(library main.cpp
        User.h
        User.cpp
        Book.h
        Book.cpp
        Library.h
        Library.cpp
)
