SRCS	= main.cpp 

OTHERS	= Makefile

C++		= c++ -Wall -Wextra -Werror -std=c++98 -pedantic

RM		= rm -rf

NAME	= Main

all: $(NAME)

$(NAME): $(SRCS) $(OTHERS)
	$(C++) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean
	make

.Phony: all clean fclean re
