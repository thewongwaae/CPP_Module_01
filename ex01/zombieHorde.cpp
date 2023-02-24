#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if (N < 1) {
		std::cout << "One is not a horde!! Moarr!" << std::endl;
		return (nullptr);
	}

	Zombie *horde = new Zombie[N];

	if (!horde)
		std::cout << "Failed alloc" << std::endl;
	else
		for (int i = 0; i < N; i++)
			horde[i].setName(name, i);
	return (horde);
}
