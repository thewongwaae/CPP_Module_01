#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define RED  	"\033[31m"
#define YELLOW	"\033[32m"
#define GREEN	"\033[33m"
#define BLUE	"\033[34m"
#define RESET	"\033[0m"

class Zombie {
	private:
		std::string _name;

	public:
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void ) const;
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif