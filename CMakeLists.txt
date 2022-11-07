cmake_minimum_required(VERSION 2.8.12)
project(yggdrasil-core)
add_definitions("-std=c++23")
set(CMAKE_CXX_STANDARD 23)
set(CONAN_CMAKE_CXX_STANDARD 23)

add_subdirectory(src)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()