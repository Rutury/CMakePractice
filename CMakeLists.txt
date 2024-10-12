cmake_minimum_required(VERSION 3.30.4)

project(Hello)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

add_executable(hello hello.cpp getString.cpp)

add_subdirectory(dlib)
add_subdirectory(slib)

target_link_libraries(hello Dlib Slib)
