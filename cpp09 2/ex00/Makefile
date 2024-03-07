NAME = btc

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -rf

FIL_CPP = main.cpp BitcoinExchange.cpp

FIL_O = $(FIL_CPP:.cpp=.o)

all : $(NAME)

$(NAME) : $(FIL_O)
		@$(CC) $(FLAGS) $(FIL_O) -o $(NAME)

%.o : %.cpp BitcoinExchange.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	$(RM) $(FIL_O)

fclean : clean
	$(RM) $(NAME)

re : fclean all