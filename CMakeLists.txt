cmake_minimum_required(VERSION 3.3)
project(sandbox_cpp)
include_directories(
        src/main/cpp
        src/lib/gtest-1.7.0/include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

set(HEADER_FILES
        src/main/cpp/com/u14n/sandbox/cpp/Constants.hpp
        src/main/cpp/com/u14n/sandbox/cpp/model/ontology/Topic.hpp)

set(SOURCE_FILES
        src/main/cpp/com/u14n/sandbox/cpp/Constants.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/ontology/Topic.cpp)

set(TEST_FILES
        src/test/cpp/com/u14n/sandbox/cpp/model/ontology/TopicTest.cpp)

add_library(sandbox SHARED
        ${HEADER_FILES}
        ${SOURCE_FILES})

add_executable(tests
        ${HEADER_FILES}
        ${SOURCE_FILES}
        ${TEST_FILES})
target_link_libraries(tests
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/test/libgtest_main.a
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/test/libgtest.a)
