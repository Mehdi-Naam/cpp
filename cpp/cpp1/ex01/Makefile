NAME = Phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -rf

FIL_CPP = contact.cpp search.cpp phonebook.cpp

FIL_O = $(FIL_CPP:.cpp=.o)

all : $(NAME)

$(NAME) : $(FIL_O)
		@$(CC) $(FLAGS) $(FIL_O) -o $(NAME)

%.o : %.cpp contact.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	$(RM) $(FIL_O)

fclean : clean
	$(RM) $(NAME)

re : fclean all