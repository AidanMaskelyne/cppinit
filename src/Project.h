#include <sstream>
#include <string>

#include "options/CmakeVersion.h"
#include "options/Generator.h"

class Project
{
private:
	std::string name;
	CmakeVersion cmake_version;
	Generator generator;

public:
	std::stringstream generate();
};
