# Basic Project Settings
cmake_minimum_required(VERSION 3.26)
project(Vector CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)

add_library(libvector INTERFACE)
target_sources(libvector PUBLIC vector.h)

install(TARGETS libvector DESTINATION lib)
install(FILES vector.h DESTINATION include)