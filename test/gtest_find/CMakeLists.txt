cmake_minimum_required(VERSION 3.9)
enable_testing()
find_package(Threads REQUIRED)
find_package(GTest REQUIRED)
file(GLOB_RECURSE SRC
        ./*.cpp
)
add_executable(test.gtest_find
        ${SRC}
)
target_include_directories(test.gtest_find PUBLIC
        ${GTEST_INCLUDE_DIRS}
)
target_link_libraries(test.gtest_find
        ${CMAKE_THREAD_LIBS_INIT}
        ${GTEST_LIBRARIES}
        ${GTEST_MAIN_LIBRARIES}
)
add_test(
        NAME cppcheck.gtest_find
        COMMAND cppcheck ${SRC}
)
add_test(
        NAME test.gtest_find
        COMMAND test.gtest_find
)
