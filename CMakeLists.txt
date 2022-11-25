cmake_minimum_required(VERSION 2.8.12)
project(yggdrasil-core)

add_definitions("-std=c++20")
set(CMAKE_CXX_STANDARD 20)
set(CONAN_CMAKE_CXX_STANDARD 20)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

add_subdirectory(src)