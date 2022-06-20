#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal(void) : _type("Animal") {

	std::cout << "Animal is entering the arena !" << std::endl;
	return;
}

Animal::Animal(std::string const type) : _type(type) {

	std::cout << "Animal is entering the arena !" << std::endl;
	return;
}

Animal::Animal(Animal const & copy) {

	*this = copy;
	return;
}

Animal::~Animal() {

	std::cout << "Animal is quitting the arena !" << std::endl;
	return;
}

Animal & Animal::operator=(Animal const & rhs) {

	this->_type = rhs.getType();
	return (*this);
}

std::string	Animal::getType(void) const {

	return (this->_type);
}

void	Animal::setType(std::string const type) {

	this->_type = type;
	return;
}

void	Animal::makeSound(void) const {

	std::cout << "Groinf Groinf" << std::endl;
	return;
}
