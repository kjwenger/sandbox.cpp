cmake_minimum_required(VERSION 3.9)
set (CMAKE_CXX_STANDARD 14)
enable_testing()
find_package(Threads REQUIRED)
file(GLOB_RECURSE SRC
        ./*.cpp
)
add_executable(test.floating_point_literal
        ${SRC}
)
set_property(TARGET test.floating_point_literal PROPERTY CXX_STANDARD 14)
add_dependencies(test.floating_point_literal googletest)
ExternalProject_Get_Property(googletest source_dir)
target_include_directories(test.floating_point_literal PUBLIC
        ${source_dir}/googletest/include
)
target_link_libraries(test.floating_point_literal
        ${CMAKE_THREAD_LIBS_INIT}
        ${CMAKE_PREFIX_PATH}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}gtest${CMAKE_STATIC_LIBRARY_SUFFIX}
        ${CMAKE_PREFIX_PATH}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}gtest_main${CMAKE_STATIC_LIBRARY_SUFFIX}
)
add_test(
        NAME cppcheck.floating_point_literal
        COMMAND cppcheck ${SRC}
)
add_test(
        NAME test.floating_point_literal
        COMMAND test.floating_point_literal
)
