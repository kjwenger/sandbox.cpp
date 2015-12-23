cmake_minimum_required(VERSION 2.6)
project(sandbox_cpp)

#ADD_BII_TARGETS()

include_directories(
        src/include/cpp
        src/lib/gtest-1.7.0/include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

set(HEADER_FILES
        src/include/cpp/com/u14n/sandbox/cpp/Constants.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/Named.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/Forked.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/Pronged.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/Root.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/Branch.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/Leaf.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/ontology/Topic.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Classis.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Familia.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Ordo.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Phylum.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Regnum.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Species.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/regnum/Animalia.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/phylum/Chordata.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/classis/Mammalia.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/ordo/Carnivora.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/familia/Canidae.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/genus/Canis.hpp
        src/include/cpp/com/u14n/sandbox/cpp/model/taxonomy/species/Lupus.hpp)

set(SOURCE_FILES
        src/main/cpp/com/u14n/sandbox/cpp/Constants.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/Named.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/Forked.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/Pronged.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/Root.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/Branch.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/Leaf.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/ontology/Topic.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Classis.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Familia.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Genus.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Ordo.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Phylum.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Regnum.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Species.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/regnum/Animalia.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/phylum/Chordata.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/classis/Mammalia.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/ordo/Carnivora.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/familia/Canidae.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/genus/Canis.cpp
        src/main/cpp/com/u14n/sandbox/cpp/model/taxonomy/species/Lupus.cpp)

set(TEST_FILES
        src/test/cpp/com/u14n/sandbox/cpp/model/ontology/TopicTest.cpp
        src/test/cpp/com/u14n/sandbox/cpp/model/taxonomy/SpeciesTest.cpp
        src/test/cpp/com/u14n/sandbox/cpp/model/taxonomy/species/LupusTest.cpp)

add_library(sandbox SHARED
        ${HEADER_FILES}
        ${SOURCE_FILES})

find_package(Threads)
add_executable(tests
        ${HEADER_FILES}
        ${SOURCE_FILES}
        ${TEST_FILES})
target_link_libraries(tests
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/test/gtest.lib
        ${CMAKE_CURRENT_SOURCE_DIR}/lib/test/gtest_main.lib)
