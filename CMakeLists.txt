cmake_minimum_required(VERSION 2.8.4)
project(clionTest)

set(SOURCE_FILES main.cpp staticClazz.cpp client/app.cpp server/app.cpp)
add_executable(clionTest ${SOURCE_FILES})