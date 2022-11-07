cmake_minimum_required(VERSION 2.8.12)
project(yggdrasil-core)

add_subdirectory(api)

set(ygg_source_files program.cpp)
add_executable(ygg-core ${ygg_source_files})
target_link_libraries(ygg-core ${CONAN_LIBS})