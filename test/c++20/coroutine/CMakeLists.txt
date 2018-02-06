cmake_minimum_required(VERSION 3.9)
enable_testing()
find_package(Threads REQUIRED)
file(GLOB_RECURSE SRC
        ./*.cpp
)
add_executable(test.coroutine
        ${SRC}
)
set_property(TARGET test.coroutine PROPERTY CXX_STANDARD 17)
add_dependencies(test.coroutine googletest)
ExternalProject_Get_Property(googletest source_dir)
target_include_directories(test.coroutine PUBLIC
        ${source_dir}/googletest/include
)
target_link_libraries(test.coroutine
        ${CMAKE_THREAD_LIBS_INIT}
        ${CMAKE_PREFIX_PATH}/lib/libgtest.a
        ${CMAKE_PREFIX_PATH}/lib/libgtest_main.a
)
add_test(
        NAME cppcheck.coroutine
        COMMAND cppcheck ${SRC}
)
add_test(
        NAME test.coroutine
        COMMAND test.coroutine
)
