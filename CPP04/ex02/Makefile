SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OTHERS	= Animal.hpp Cat.hpp Dog.hpp Brain.hpp Makefile

C++		= c++ -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

NAME	= setWorldOnFire

all: $(NAME)

$(NAME): $(SRCS) $(OTHERS)
	$(C++) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean
	make

.Phony: all clean fclean re
