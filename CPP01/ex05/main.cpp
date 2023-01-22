#include "Harl.hpp"

int main()
{
	Harl	instance;
	instance.complain("ERROR");
	instance.complain("WARNING");
	instance.complain("INFO");
	instance.complain("DEBUG");
	instance.complain("HELLO");
}
