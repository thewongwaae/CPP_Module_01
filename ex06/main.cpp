#include "Harl.hpp"

using namespace std;

int main( int ac, char **av ) {
	Harl	coworker;
	string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		lvl = -1;

	if (ac > 2)
		return (0);

	for (int i = 0; i < 4; i++) {
		if (lvls[i] == av[1]) {
			lvl = i;
			break;
		}
	} 

	switch (lvl) {
		case 0:
			coworker.complain(lvls[0]);
		case 1:
			coworker.complain(lvls[1]);
		case 2:
			coworker.complain(lvls[2]);
		case 3:
			coworker.complain(lvls[3]);
			break;
		default:
			cout << "[ Probably complaining about insignificant problems ]" << endl;
	}
	return (0);
}
