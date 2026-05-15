cmake_minimum_required(VERSION 3.10)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(LearnCpp
    main.cpp
    "Chapter_13/Chapter_13_13/chapter_13_01.cpp"
 "Chapter_13/Chapter_13_13/chapter_13_02.cpp" "InterestingMacroDefine/MacroDefine_01.h" "Chapter_01/Chapter_01_04/chapter_01_04.h" "Chapter_01/Chapter_01_04/chapter_01_01.cpp")

target_include_directories(LearnCpp PRIVATE ${CMAKE_SOURCE_DIR})
