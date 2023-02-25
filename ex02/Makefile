NAME	= Brain
CPP		= c++ -fsanitize=address -fno-omit-frame-pointer -g
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRC		= main.cpp

all : $(NAME)

$(NAME) :
	$(CPP) $(FLAGS) main.cpp -o $(NAME)

clean :
	$(RM) $(NAME)

fclean :
	$(RM) $(NAME)

re : fclean all