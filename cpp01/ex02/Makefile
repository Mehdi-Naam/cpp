NAME = Brins

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -rf

#include "Zombie.hpp"
FIL_CPP = main.cpp

FIL_O = $(FIL_CPP:.cpp=.o)

all : $(NAME)

$(NAME) : $(FIL_O)
		@$(CC) $(FLAGS) $(FIL_O) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	$(RM) $(FIL_O)

fclean : clean
	$(RM) $(NAME)

re : fclean all
