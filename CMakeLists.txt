cmake_minimum_required(VERSION 3.3)
project(sandbox_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/main/cpp/main.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/ontology/Topic.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/ontology/Topic.hpp)
add_executable(sandbox_cpp ${SOURCE_FILES})