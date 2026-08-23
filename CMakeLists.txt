cmake_minimum_required(VERSION 4.3)
project(CPPProgrammingRecipes)

set(CMAKE_CXX_STANDARD 17)

#Main Project
add_executable(CPPProgrammingRecipes
        main.cpp
        DataStructures/Dictionary/dictionary.h
        main.h
)

add_executable(Lists
        DataStructures/Lists/main.cpp
        DataStructures/Lists/lists.h
)

add_executable(Dictionary
        DataStructures/Dictionary/main.cpp
)
