cmake_minimum_required(VERSION 3.30.4)

project(d_lib)

set(SOURCES dlib1.cpp dlib2.cpp)

add_library(Dlib SHARED ${SOURCES})

target_include_directories(Dlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
