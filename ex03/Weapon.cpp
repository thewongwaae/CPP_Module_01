#include "Weapon.hpp"

Weapon::Weapon( const std::string type ) : _type(type) {}
Weapon::Weapon( void ) {
	_type = "fists";
}
Weapon::~Weapon( void ) {}

std::string Weapon::getType( void ) {
	return this->_type;
}

void Weapon::setType( std::string newType) {
	this->_type = newType;
}
