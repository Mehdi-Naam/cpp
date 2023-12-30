NAME = Human

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -rf

#include "Zombie.hpp"
FIL_CPP = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

FIL_O = $(FIL_CPP:.cpp=.o)

all : $(NAME)

$(NAME) : $(FIL_O)
		@$(CC) $(FLAGS) $(FIL_O) -o $(NAME)

%.o : %.cpp HumanA.hpp HumanB.hpp 
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	$(RM) $(FIL_O)

fclean : clean
	$(RM) $(NAME)

re : fclean all
