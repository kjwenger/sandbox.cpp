cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 17)
enable_testing()
find_package(Threads REQUIRED)
file(GLOB_RECURSE SRC
        ./*.cpp
)
add_executable(test.range-based_for_loop
        ${SRC}
)
set_property(TARGET test.range-based_for_loop PROPERTY CXX_STANDARD 17)
add_dependencies(test.range-based_for_loop googletest)
ExternalProject_Get_Property(googletest source_dir)
target_include_directories(test.range-based_for_loop PUBLIC
        ${source_dir}/googletest/include
)
target_link_libraries(test.range-based_for_loop
        ${CMAKE_THREAD_LIBS_INIT}
        ${CMAKE_PREFIX_PATH}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}gtest${CMAKE_STATIC_LIBRARY_SUFFIX}
        ${CMAKE_PREFIX_PATH}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}gtest_main${CMAKE_STATIC_LIBRARY_SUFFIX}
)
add_test(
        NAME cppcheck.range-based_for_loop
        COMMAND cppcheck ${SRC}
)
add_test(
        NAME test.range-based_for_loop
        COMMAND test.range-based_for_loop
)
