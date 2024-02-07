NAME = Form

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = @rm -rf

FIL_CPP = Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp Intern.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp

FIL_O = $(FIL_CPP:.cpp=.o)

all : $(NAME)

$(NAME) : $(FIL_O)
		@$(CC) $(FLAGS) $(FIL_O) -o $(NAME)

%.o : %.cpp Bureaucrat.hpp AForm.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean : 
	$(RM) $(FIL_O) *_shrubbery

fclean : clean 
	$(RM) $(NAME)

re : fclean all