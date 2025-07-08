#include <iostream>
#include <string.h>

#include "Project.h"

void print_default_help()
{
	std::cout << "The following commands are available:" << std::endl;
	std::cout << "\tnew\t\tCreate a new C++ CMake project" << std::endl;
	std::cout << "\tinit\t\tCreate a new C++ CMake project in the current directory" << std::endl;
}

int main(int argc, char* argv[])
{
	
	// Parse the args
	if (argc == 1)
	{
		print_default_help();

		return 0;
	}

	if (strcmp(argv[1], "help") == 0 || strcmp(argv[1], "--help") == 0)
	{
		// Only the `help` or `--help` arg was supplied
		if (argc == 2)
		{
			print_default_help();
		}

		return 0;
	}

	print_default_help();
	
	return 0;
}
