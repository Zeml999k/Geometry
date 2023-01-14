cmake_minimum_required(VERSION 2.6)
project(Test)
file(GLOB CPP "*.cpp")
add_executable(${PROJECT_NAME} ${CPP})
