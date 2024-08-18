cmake_minimum_required(VERSION 3.5)

project(libadd)

set(CMAKE_C_STANDARD 11)

add_library(add SHARED libadd.c)
target_include_directories(add SYSTEM PUBLIC include/)

add_executable(prog prog.c)
target_link_libraries(prog PRIVATE add)
