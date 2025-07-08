cmake_minimum_required(VERSION 4.0)
project(cppinit
		VERSION 1.0.0
		DESCRIPTION "A tool to initialise a basic C++ CMake project"
		LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS On)

file(GLOB_RECURSE sources src/*.cpp src/*.h)

add_executable(cppinit ${sources})
