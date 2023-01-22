SRCS	= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OTHERS	= Zombie.hpp Makefile

C++		= c++ -Wall -Wextra -Werror -std=c++98 -pedantic

RM		= rm -rf

NAME	= Zombie

all: $(NAME)

$(NAME): $(SRCS) $(OTHERS)
	$(C++) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean
	make

.Phony: all clean fclean re
