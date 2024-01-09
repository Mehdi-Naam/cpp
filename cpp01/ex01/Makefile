NAME = Zombie

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -rf

#include "Zombie.hpp"
FIL_CPP = Zombie.cpp main.cpp zombieHorde.cpp

FIL_O = $(FIL_CPP:.cpp=.o)

all : $(NAME)

$(NAME) : $(FIL_O) Zombie.hpp 
		@$(CC) $(FLAGS) $(FIL_O) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	$(RM) $(FIL_O)

fclean : clean
	$(RM) $(NAME)

re : fclean all
