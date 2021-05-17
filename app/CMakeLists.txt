cmake_minimum_required(VERSION 3.5)
project(parnas_engine_application VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

# parnas_engine_application.exe
add_executable(${PROJECT_NAME} src/main.cpp)