#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & copy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

Fixed::Fixed(const int n) {

	std::cout << "Int constructor called" << std::endl;
	this->_value = n << this->_nbBits; // ici, le shift va seulement rajouter des 0 devant l'entier en binaire, ce qui ne va pas changer la valeur du decimal
	return;
}

Fixed::Fixed(const float f) {

	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << this->_nbBits)) ; // float * 256, qui equivaut a 2 puissance 8
	return; 
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {

	this->_value = raw;
	return;
}

float	Fixed::toFloat(void) const {
	
	return ((float)(this->_value / (float)(1 << this->_nbBits)));
}

int		Fixed::toInt(void) const {

	return (this->_value >> this->_nbBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & n) {

	o << n.toFloat();
	return (o);
}
