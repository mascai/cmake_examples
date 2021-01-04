cmake_minimum_required(VERSION 3.6)

project(TestOption)

option(USE_LOG "use log output" OFF)

if(USE_LOG)
    message("USE_LOG enabled")
else()
    message("USE_LOG disabled")
endif()

add_executable(main.bin main.cpp)
