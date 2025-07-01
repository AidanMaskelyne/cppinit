#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
	const std::string PROGRAM_NAME = argv[0];
	std::vector<std::string> args;

	for (int i = 1; i < argc; i++)
		args.push_back(argv[i]);

	std::cout << PROGRAM_NAME << std::endl;
	for (int i = 0; i < args.size(); i++)
		std::cout << "\t" << args[i] << std::endl;

	return 0;
}
