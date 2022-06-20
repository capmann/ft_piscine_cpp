#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {

	std::cout << this->_type << " is entering the arena !" << std::endl;
	this->_brain = new Brain();
	return;
}

Cat::Cat(Cat const & copy) {

	std::cout << "Cat Copy Constructor was called." << std::endl;
	*this = copy;
	return;
}

Cat::~Cat() {

	std::cout << this->_type << " is quitting the arena !" << std::endl;
	delete this->_brain;
	return;
}

Cat & Cat::operator=(Cat const & rhs) {

	this->_type = rhs.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "Meooooow..." << std::endl;
	return;
}

Brain	*Cat::getBrain(void) const {

	return (this->_brain);
}