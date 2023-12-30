NAME = Zomdie

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -rf

FIL_CPP = Zombie.cpp newZombie.cpp main.cpp

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
