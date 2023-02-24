#include "Zombie.hpp"

int main( void ) {
	std::string name;

	// on stack
	std::cout << "Zombie [stack]: " << std::flush;
	std::cin >> name;

	Zombie Sombie(name);
	Sombie.announce();

	// on heap
	std::cout << "Zombie [heap]: " << std::flush;
	std::cin >> name;

	Zombie *Hombie = newZombie(name);
	Hombie->announce();
	delete Hombie;

	// on seperate function stack
	std::cout << "Zombie [randChump]: " << std::flush;
	std::cin >> name;

	randomChump(name);

	return 0;
}
