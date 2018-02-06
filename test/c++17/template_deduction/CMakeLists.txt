cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 17)
enable_testing()
find_package(Threads REQUIRED)
file(GLOB_RECURSE SRC
        ./*.cpp
)
add_executable(test.template_deduction
        ${SRC}
)
set_property(TARGET test.template_deduction PROPERTY CXX_STANDARD 17)
add_dependencies(test.template_deduction googletest)
ExternalProject_Get_Property(googletest source_dir)
target_include_directories(test.template_deduction PUBLIC
        ${source_dir}/googletest/include
)
target_link_libraries(test.template_deduction
        ${CMAKE_THREAD_LIBS_INIT}
        ${CMAKE_PREFIX_PATH}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}gtest${CMAKE_STATIC_LIBRARY_SUFFIX}
        ${CMAKE_PREFIX_PATH}/lib/${CMAKE_STATIC_LIBRARY_PREFIX}gtest_main${CMAKE_STATIC_LIBRARY_SUFFIX}
)
add_test(
        NAME cppcheck.template_deduction
        COMMAND cppcheck ${SRC}
)
add_test(
        NAME test.template_deduction
        COMMAND test.template_deduction
)
