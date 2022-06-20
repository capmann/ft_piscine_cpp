#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {

	return;
}

Fixed::Fixed(Fixed const & copy) {

	*this = copy;
	return;
}

Fixed::Fixed(const int n) {

	this->_value = n << this->_nbBits; // ici, le shift va seulement rajouter des 0 devant l'entier en binaire, ce qui ne va pas changer la valeur du decimal
	return;
}

Fixed::Fixed(const float f) {

	this->_value = roundf(f * (1 << this->_nbBits)) ; // float * 256 
	return; 
}

Fixed::~Fixed() {

	return;
}

Fixed & Fixed::operator=(Fixed const & rhs) {

	this->_value = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {

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

bool	Fixed::operator>(Fixed const &rhs) const {

	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const {

	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const &rhs) const {

	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const {

	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const {

	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const {

	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs) {

	Fixed	value(*this);

	value.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (value);
}

Fixed	Fixed::operator-(Fixed const & rhs) {

	Fixed	value(*this);

	value.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (value);
}

Fixed	Fixed::operator*(Fixed const & rhs) {

	Fixed	value(*this);

	value.setRawBits(this->getRawBits() * rhs.getRawBits() / (1 << this->_nbBits));
	return (value);
}

Fixed	Fixed::operator/(Fixed const & rhs) {

	Fixed	value(*this);

	value.setRawBits(this->getRawBits() / rhs.getRawBits() * (1 << this->_nbBits));
	return (value);
}

Fixed &	Fixed::operator++(void) {

	this->_value += 1;
	return (*this);
}

Fixed & Fixed::operator--(void) {

	this->_value -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	tmp(*this);

	this->_value += 1;
	return (tmp);
}

Fixed	Fixed::operator--(int) {

	Fixed	tmp(*this);

	this->_value -= 1;
	return (tmp);
}

Fixed const & Fixed::min(Fixed const & nb1, Fixed const & nb2) {

	if (nb1 < nb2)
		return (nb1);
	else
		return (nb2);
}

Fixed const & Fixed::max(Fixed const & nb1, Fixed const & nb2) {

	if (nb1 >= nb2)
		return (nb1);
	else
		return (nb2);
}

Fixed & Fixed::min(Fixed & nb1, Fixed & nb2) {

	if (nb1 < nb2)
		return (nb1);
	else
		return (nb2);
}

Fixed & Fixed::max(Fixed & nb1, Fixed & nb2) {

	if (nb1 >= nb2)
		return (nb1);
	else
		return (nb2);
}