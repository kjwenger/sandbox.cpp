cmake_minimum_required(VERSION 2.6)
project(sandbox_cpp)

include_directories(
        include/cpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

set(HEADER_FILES
        include/cpp/com/u14n/sandbox/cpp/Constants.hpp
        include/cpp/com/u14n/sandbox/cpp/model/Named.hpp
        include/cpp/com/u14n/sandbox/cpp/model/Forked.hpp
        include/cpp/com/u14n/sandbox/cpp/model/Pronged.hpp
        include/cpp/com/u14n/sandbox/cpp/model/Root.hpp
        include/cpp/com/u14n/sandbox/cpp/model/Branch.hpp
        include/cpp/com/u14n/sandbox/cpp/model/Leaf.hpp
        include/cpp/com/u14n/sandbox/cpp/model/ontology/Topic.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Classis.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Familia.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Genus.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Ordo.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Phylum.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Regnum.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/Species.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/regnum/Animalia.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/phylum/Chordata.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/classis/Mammalia.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/ordo/Carnivora.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/familia/Canidae.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/genus/Canis.hpp
        include/cpp/com/u14n/sandbox/cpp/model/taxonomy/species/Lupus.hpp
)

set(SOURCE_FILES
        main/cpp/com/u14n/sandbox/cpp/Constants.cpp
        main/cpp/com/u14n/sandbox/cpp/model/Named.cpp
        main/cpp/com/u14n/sandbox/cpp/model/Forked.cpp
        main/cpp/com/u14n/sandbox/cpp/model/Pronged.cpp
        main/cpp/com/u14n/sandbox/cpp/model/Root.cpp
        main/cpp/com/u14n/sandbox/cpp/model/Branch.cpp
        main/cpp/com/u14n/sandbox/cpp/model/Leaf.cpp
        main/cpp/com/u14n/sandbox/cpp/model/ontology/Topic.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Classis.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Familia.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Genus.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Ordo.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Phylum.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Regnum.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/Species.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/regnum/Animalia.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/phylum/Chordata.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/classis/Mammalia.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/ordo/Carnivora.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/familia/Canidae.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/genus/Canis.cpp
        main/cpp/com/u14n/sandbox/cpp/model/taxonomy/species/Lupus.cpp
)

set(TEST_FILES
        test/cpp/com/u14n/sandbox/cpp/model/ontology/TopicTest.cpp
        test/cpp/com/u14n/sandbox/cpp/model/taxonomy/SpeciesTest.cpp
        test/cpp/com/u14n/sandbox/cpp/model/taxonomy/species/LupusTest.cpp
)

add_library(sandbox SHARED
        ${HEADER_FILES}
        ${SOURCE_FILES}
)

find_package(Threads)
add_executable(tests
        ${HEADER_FILES}
        ${SOURCE_FILES}
        ${TEST_FILES}
)
target_include_directories(tests PUBLIC
        ${GTEST_INCLUDE_DIRS}
)
target_link_libraries(tests
        ${GTEST_LIBRARY}
        ${GTEST_MAIN_LIBRARY}
        ${CMAKE_THREAD_LIBS_INIT}
)
