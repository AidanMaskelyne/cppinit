#include "../Project.h"

class NewCommand
{
private:
	Project project;
	bool interactive_mode = false;

public:
	int run();
};
