NAME	= replace
CPP		= c++ -fsanitize=address -fno-omit-frame-pointer
FLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

SRC		= main.cpp

all: $(NAME)

$(NAME):
	@echo "\033[0;32mReplace program done!\033[0m"
	@$(CPP) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@echo "\033[0;31mDeleting the program\033[0m"
	@$(RM) $(NAME)

fclean: clean

re : fclean all