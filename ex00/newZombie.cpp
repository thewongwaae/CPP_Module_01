#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	// CPP's malloc
	Zombie *zomb = new Zombie(name);

	if (!zomb)
		std::cout << "Failed alloc" << std::endl;
	return (zomb);
}
