#include "Project.h"
#include <sstream>
#include <stdexcept>

std::stringstream Project::generate()
{
	std::stringstream output {};

	std::string cmake_version;
	switch (this->cmake_version)
	{
		case CmakeVersion::v4_0:
			cmake_version = "4.0";
			break;
		case CmakeVersion::v4_1:
			  cmake_version = "4.1";
			  break;
		default:
			  throw new std::invalid_argument("Invalid CMake version!");
			  break;
	}

	output << "cmake_minimum_required(VERSION " << this->cmake_version << ")\n";
	output << "project(" << this->name << ")\n";

	return output;
}

