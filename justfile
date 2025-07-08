alias g := generate
alias b := build
alias r := run

default: build

generate:
	cmake -S . -B build -G Ninja

build: generate
	cmake --build build

run: build
	./build/cppinit
