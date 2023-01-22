SRCS	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OTHERS	= HumanA.hpp HumanB.hpp Weapon.hpp Makefile

C++		= c++ -Wall -Wextra -Werror -std=c++98 -pedantic

RM		= rm -rf

NAME	= Attack

all: $(NAME)

$(NAME): $(SRCS) $(OTHERS)
	$(C++) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean
	make

.Phony: all clean fclean re
