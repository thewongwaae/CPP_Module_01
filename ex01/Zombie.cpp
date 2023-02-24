#include "Zombie.hpp"

Zombie::Zombie( void ) {
	std::cout << GREEN << "They are aliveee!" << RESET << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << RED << "Bashed " << RESET << _name << RED << " to bits" << RESET << std::endl;
}

void Zombie::announce( void ) const {
	std::cout << _name << BLUE << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void Zombie::setName( std::string name, int index ) {
	_name = name + std::to_string(index);
}
