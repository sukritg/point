# Basic Project Settings
cmake_minimum_required(VERSION 3.26)
project(Vector CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)

include_directories(${INCLUDE_PATH})

message(${INCLUDE_PATH})

add_executable(App demo.cpp)
target_include_directories(App PRIVATE INCLUDE_PATH)
target_link_libraries(App PRIVATE libvector)
set_target_properties(App PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

