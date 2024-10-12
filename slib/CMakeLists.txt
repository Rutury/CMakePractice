cmake_minimum_required(VERSION 3.30.4)

project(Slib)

set(SOURCES slib1.cpp)
set(SOURCES ${SOURCES} slib2.cpp)

add_library(Slib STATIC ${SOURCES})

target_include_directories(Slib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
