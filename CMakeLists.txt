cmake_minimum_required(VERSION 3.20)

project(bib2x VERSION 0.9.1)

find_package(FLEX REQUIRED)
find_package(BISON REQUIRED)

set(CMAKE_CXX_STANDARD 98)

set(INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")

add_compile_options(
    -Wno-write-strings # Ignore warning from casting of string literal to char*
)

add_subdirectory(src)
add_subdirectory(include)
add_subdirectory(templates)

