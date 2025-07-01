cmake_minimum_required(VERSION 4.0)
project(cppinit
		VERSION 1.0.0
		DESCRIPTION "A tool to initialise a basic C++ CMake project"
		LANGUAGES CXX
)

set(CMAKE_EXPORT_COMPILE_COMMANDS On)

set(CPPINIT-SRC
	src/main.cpp
)

add_executable(cppinit ${CPPINIT-SRC})
