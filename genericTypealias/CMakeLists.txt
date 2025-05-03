cmake_minimum_required(VERSION 3.28)
project(GenericTypealias CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(generic_typealias GenericTypeParamType.cpp main.cpp)
