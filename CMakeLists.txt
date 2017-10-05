cmake_minimum_required(VERSION 3.2)

project(yasi)

set (CMAKE_CXX_STANDARD 14)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_check_compiler()
#conan_output_dirs_setup()
conan_set_find_library_paths()
message(STATUS "Conan: Using cmake targets configuration")
conan_define_targets()
conan_set_rpath()
conan_set_vs_runtime()
conan_set_libcxx()
conan_set_find_paths()

set(BUILD_SHARED_LIBS ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_definitions(-W -Wall -Wextra -pedantic)

set(YASI_SOURCES src/yasi/tuple.hpp src/yasi/tuple.cpp)

add_library(yasi ${YASI_SOURCES})
target_include_directories(yasi PUBLIC src)
target_link_libraries(yasi CONAN_PKG::yadi)
