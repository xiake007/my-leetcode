cmake_minimum_required(VERSION 3.10)

project(leetcode VERSION 1.0)

set(SRC 
        src/main.cpp
)

include_directories(
        Catch2/src
        Catch2/build/generated-includes
)

link_directories(
        Catch2/build/src
)

add_executable(leetcode ${SRC})
target_link_libraries(leetcode PRIVATE Catch2Main Catch2)