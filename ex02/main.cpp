#include <iostream>

int main( void ) {
	std::string string = "HI THIS IS BRAIN";
	/*
		val of this set to addr of that
		so dereference with * to access value
		pointers can be reassigned [to different types]

		[eg.]
		int i = 10;
		int *p = &i;
		double d = 3.14;
		p = (int *) &d;

		though should be avoided
	*/
	std::string *stringPTR = &string;
	/*
		addr of this set to val of that
		can directly access value
	*/
	std::string &stringREF = string;

	std::cout << "String:\t\t" << &string << ": " << string << std::endl;
	std::cout << "StringPTR:\t" << stringPTR << ": " << *stringPTR << std::endl;
	std::cout << "StringREF:\t" << &stringREF << ": " << stringREF << std::endl;

	return 0;
}
