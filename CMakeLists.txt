cmake_minimum_required(VERSION 3.26)
project(library)

set(CMAKE_CXX_STANDARD 23)

add_executable(library main.cpp
        User.h
        User.cpp
        Book.h
        Book.cpp
        Bookclub.h
        Bookclub.cpp
        Fiction.h
        Fiction.cpp
        NonFiction.cpp
        NonFiction.h
        Children.cpp
        Children.h
        Order.cpp
        Order.h
        Manager.h
        Menu.h
        EBook.cpp
        EBook.h
)
