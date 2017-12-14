cmake_minimum_required(VERSION 2.6)
project(sandbox_cpp)
add_subdirectory(dependencies)

get_cmake_property(_variableNames VARIABLES)
foreach (_variableName ${_variableNames})
    message(STATUS "${_variableName}=${${_variableName}}")
endforeach()

add_subdirectory(src)
