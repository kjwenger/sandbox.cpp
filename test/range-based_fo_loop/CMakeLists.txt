cmake_minimum_required(VERSION 3.9)
enable_testing()
find_package(Threads REQUIRED)
file(GLOB_RECURSE SRC
        ./*.cpp
)
add_executable(test.range-based_fo_loop
        ${SRC}
)
set_property(TARGET test.range-based_fo_loop PROPERTY CXX_STANDARD 17)
add_dependencies(test.range-based_fo_loop googletest)
ExternalProject_Get_Property(googletest source_dir)
target_include_directories(test.range-based_fo_loop PUBLIC
        ${source_dir}/googletest/include
)
target_link_libraries(test.range-based_fo_loop
        ${CMAKE_THREAD_LIBS_INIT}
        ${CMAKE_PREFIX_PATH}/lib/libgtest.a
        ${CMAKE_PREFIX_PATH}/lib/libgtest_main.a
)
add_test(
        NAME cppcheck.range-based_fo_loop
        COMMAND cppcheck ${SRC}
)
add_test(
        NAME test.range-based_fo_loop
        COMMAND test.range-based_fo_loop
)
