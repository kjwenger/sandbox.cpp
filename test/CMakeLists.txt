cmake_minimum_required(VERSION 3.9)
add_subdirectory(floating_point_literal)
add_subdirectory(range-based_for_loop)
#add_subdirectory(template_auto)
#add_subdirectory(coroutine)

enable_testing()
find_package(Threads REQUIRED)
file(GLOB_RECURSE SRC
        ./floating_point_literal/*.cpp
        ./range-based_for_loop/*.cpp
)
add_executable(test.all
        ${SRC}
)
set_property(TARGET test.all PROPERTY CXX_STANDARD 17)
add_dependencies(test.all googletest)
ExternalProject_Get_Property(googletest source_dir)
target_include_directories(test.all PUBLIC
        ${source_dir}/googletest/include
)
target_link_libraries(test.all
        ${CMAKE_THREAD_LIBS_INIT}
        ${CMAKE_PREFIX_PATH}/lib/libgtest.a
        ${CMAKE_PREFIX_PATH}/lib/libgtest_main.a
)
add_test(
        NAME cppcheck.all
        COMMAND cppcheck ${SRC}
)
add_test(
        NAME test.all
        COMMAND test.all
)
