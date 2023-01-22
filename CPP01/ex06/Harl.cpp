#include "Harl.hpp"

Harl::Harl()
{
	this->behaves[0].name = "DEBUG";
	this->behaves[0].ptr = &Harl::debug;
	this->behaves[1].name = "INFO";
	this->behaves[1].ptr = &Harl::info;
	this->behaves[2].name = "WARNING";
	this->behaves[2].ptr = &Harl::warning;
	this->behaves[3].name = "ERROR";
	this->behaves[3].ptr = &Harl::error;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void    Harl::complain(std::string level)
{
	int checker = 0;
	for (size_t i = 0; i < 4; i++)
	{
		if (level == behaves[i].name)
		{
			checker = 1;
			while (i < 4)
				(this->*(behaves[i++].ptr))();
		}
	}
	if (!checker)
		std::cout << "No such behavior" << std::endl;
}
