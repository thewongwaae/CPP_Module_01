#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {
	//_name = name;
	std::cout << _name << GREEN << " is aliveee!" << RESET << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << RED << "Bashed " << RESET << _name << RED << " to bits" << RESET << std::endl;
}

void Zombie::announce( void ) const {
	std::cout << _name << BLUE << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
