cmake_minimum_required(VERSION 3.23)

project(LearningDSA)

# Arrays Base Library
add_library(ArraysBase)
target_sources(ArraysBase
    PRIVATE
        "arrays/base/helpers.cpp"

    PUBLIC
        FILE_SET arraysBaseHeaders
        TYPE HEADERS
        BASE_DIRS
            "arrays/base/"
        FILES
            "arrays/base/helpers.hpp"
)


# Arrays Sorting Library
add_library(ArraysSorting)
target_sources(ArraysSorting
    PRIVATE
        "arrays/sorting/bubble.cpp"
        "arrays/sorting/insertion.cpp"
        "arrays/sorting/selection.cpp"

    PUBLIC
        FILE_SET arraysHeaders
        TYPE HEADERS
        BASE_DIRS
            "arrays/sorting/"
        FILES
            "arrays/sorting/sortings.hpp"
)
target_link_libraries(ArraysSorting
    PUBLIC
        ArraysBase
)
target_include_directories(ArraysSorting
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)


# Arrays Example Executable
add_executable(ArraysSortingExample)
target_link_libraries(ArraysSortingExample
    PRIVATE
        ArraysSorting
)

target_sources(ArraysSortingExample
    PRIVATE
        arrays/sortingExample.cpp
)