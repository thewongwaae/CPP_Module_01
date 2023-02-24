NAME	= Horde
CPP		= c++ -fsanitize=address -fno-omit-frame-pointer -g
FLAGS	= -Wall -Wextra -Werror -I -std=c++98
RM		= rm -rf

SRC		= main.cpp Zombie.cpp zombieHorde.cpp 
INC		= Zombie.hpp

OBJ		= $(SRC:%.cpp=%.o)

all : $(NAME)

%.o : %.cpp $(INC)
	@echo "\033[0;33mCompiling $<\033[0m"
	@$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@echo "\033[0;32mBraiiiiiiinnnzzzZ...\033[0m"
	@$(CPP) $(FLAGS) $^ -o $@

clean:
	@echo "\033[0;31mRemoving objects...\033[0m"
	@$(RM) $(OBJ)

fclean: clean
	@echo "\033[0;31mKilling the horde...\033[0m"
	@$(RM) $(NAME)

re : fclean all