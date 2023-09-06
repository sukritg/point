# Basic Project Settings
cmake_minimum_required(VERSION 3.26)
project(Vector CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)

# Include file location
set(INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Compile and build static/dynamic library
add_subdirectory(include)

# Compile and build examples
add_subdirectory(example)



