#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {

	std::cout << this->getType() << " is entering the arena !" << std::endl;
	return;
}

Cat::Cat(Cat const & copy) {

	*this = copy;
	return;
}

Cat::~Cat() {

	std::cout << this->getType() << " is quitting the arena !" << std::endl;
	return;
}

Cat & Cat::operator=(Cat const & rhs) {

	this->_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "Meooooow..." << std::endl;
	return;
}