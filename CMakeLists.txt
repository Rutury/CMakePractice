cmake_minimum_required(VERSION 3.30.4)

project(Hello)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

add_subdirectory(dlib)
add_subdirectory(slib)

add_executable(hello hello.cpp getString.cpp)

target_link_libraries(hello PRIVATE Dlib Slib)

add_custom_command(TARGET hello POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_BINARY_DIR}/dlib/libDlib.dll ${CMAKE_BINARY_DIR}/libDlib.dll)
