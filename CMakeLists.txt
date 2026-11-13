cmake_minimum_required(VERSION 4.3)
project(CPPProgrammingRecipes)

set(CMAKE_CXX_STANDARD 17)

#Main Project
add_executable(CPPProgrammingRecipes
        main.cpp
        main.h
)

add_executable(Lists
        DataStructures/Lists/main.cpp
        DataStructures/Lists/lists.h
)

add_executable(Dictionary
        DataStructures/Dictionary/main.cpp
        DataStructures/Dictionary/dictionary.h
)

add_executable(Basics
        DataStructures/Basics/main.cpp
        DataStructures/Basics/basics.h
        DataStructures/Basics/test.cpp
        DataStructures/Basics/test.h
)
