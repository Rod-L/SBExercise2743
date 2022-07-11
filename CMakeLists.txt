cmake_minimum_required(VERSION 3.22)
project(SBExercise2743)

set(CMAKE_CXX_STANDARD 14)

add_executable(SBExercise2743 src/main.cpp include/Employee.h include/Tasks.h include/Worker.h include/Manager.h include/Director.h src/Director.cpp src/Manager.cpp src/Tasks.cpp src/Employee.cpp src/Worker.cpp)

target_include_directories(SBExercise2743 PUBLIC include)
