#include <iostream>
#include <fstream>

int	replace( char **av, std::string buff ) {
	std::ofstream	newFile;
	int				pos;
	int				size;

	size = buff.size();
	// typecast to cpp string to concat, then back to c-style string because .open takes a c-style arg
	newFile.open((std::string(av[1]) + ".replace").c_str());
	if (newFile.fail())
		return (1);
	for (int i = 0; i < size; i++) {
		pos = buff.find(av[2], i);
		if (pos != -1 && pos == i) {
			newFile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			newFile << buff[i];
	}
	newFile.close();
	return (0);
}

int main( int ac, char **av ) {
	std::ifstream	file;
	std::string		buff;
	char			ch;

	if (ac != 4) {
		std::cout	<< "Wrong number of inputs.\n"
					<< "./replace /file/path strToReplace strToReplaceWith"
					<< std::endl;
		return (0);
	}
	file.open(av[1]);
	if (file.fail()) {
		std::cout	<< "Error: No such file or directory" << std::endl;
		return (0);
	}
	while (!file.eof() && file >> std::noskipws >> ch)
		buff += ch;
	file.close();
	return (replace(av, buff));
}
