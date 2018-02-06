cmake_minimum_required(VERSION 3.9)
enable_testing()
find_package(Threads REQUIRED)
file(GLOB_RECURSE SRC
        ./*.cpp
)
add_executable(test.variable_number_of_arguments
        ${SRC}
)
add_dependencies(test.variable_number_of_arguments googletest)
ExternalProject_Get_Property(googletest source_dir)
target_include_directories(test.variable_number_of_arguments PUBLIC
        ${source_dir}/googletest/include
)
target_link_libraries(test.variable_number_of_arguments
        ${CMAKE_THREAD_LIBS_INIT}
        ${CMAKE_PREFIX_PATH}/lib/libgtest.a
        ${CMAKE_PREFIX_PATH}/lib/libgtest_main.a
)
add_test(
        NAME cppcheck.variable_number_of_arguments
        COMMAND cppcheck ${SRC}
)
add_test(
        NAME test.variable_number_of_arguments
        COMMAND test.variable_number_of_arguments
)
