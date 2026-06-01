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
target_include_directories(ArraysBase
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)


# Arrays Sorting Library
add_library(ArraysSorting)
target_sources(ArraysSorting
    PRIVATE
        "arrays/sorting/bubble.cpp"
        "arrays/sorting/insertion.cpp"
        "arrays/sorting/selection.cpp"

    PUBLIC
        FILE_SET arraysSortingHeaders
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

# Arrays Sorting Example Executable
add_executable(ArraysSortingExample)
target_link_libraries(ArraysSortingExample
    PRIVATE
        ArraysSorting
)
target_sources(ArraysSortingExample
    PRIVATE
        arrays/sortingExample.cpp
)


# Arrays Searching Library
add_library(ArraysSearching)
target_sources(ArraysSearching
    PRIVATE
        "arrays/searching/linear.cpp"
        "arrays/searching/binary.cpp"
    PUBLIC
        FILE_SET arraysSearchingHeaders
        TYPE HEADERS
        BASE_DIRS
            "arrays/searching/"
        FILES
            "arrays/searching/searching.hpp"
)
target_link_libraries(ArraysSearching
    PUBLIC
        ArraysBase
)

# Arrays Searching Example Executable
add_executable(ArraysSearchingExample)
target_link_libraries(ArraysSearchingExample
    PRIVATE
        ArraysSearching
)
target_sources(ArraysSearchingExample
    PRIVATE
        arrays/searchingExample.cpp
)