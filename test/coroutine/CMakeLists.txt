cmake_minimum_required(VERSION 3.9)
include(Paths)
enable_testing()
find_package(Threads REQUIRED)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIR})
file(GLOB_RECURSE SRC
        ./*.cpp
)
add_executable(test.coroutine
        ${SRC}
)
target_link_libraries(test.coroutine
        ${CMAKE_THREAD_LIBS_INIT}
        ${GTEST_LIBRARY}
        ${GTEST_MAIN_LIBRARY}
)
add_test(
        NAME cppcheck.coroutine
        COMMAND cppcheck ${SRC}
)
add_test(
        NAME test.coroutine
        COMMAND test.coroutine
)
