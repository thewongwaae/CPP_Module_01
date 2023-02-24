#include "Zombie.hpp"

int main( void ) {
	int N = 5;
	int i = 0;

	Zombie *horde = zombieHorde(N, "zombe");
	while (i < N)
		horde[i++].announce();

	delete [] horde;
	return 0;
}