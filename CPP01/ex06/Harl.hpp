#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	typedef struct s_bhv
	{
		std::string name;
		void (Harl::*ptr)(void);
	}	t_bhv;
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	t_bhv	behaves[4];
public:
	Harl();
	void    complain(std::string level);
};

#endif
