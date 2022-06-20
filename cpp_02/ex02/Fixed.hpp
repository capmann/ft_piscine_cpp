
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class	Fixed {

public:

	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(Fixed const & copy);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;

	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);

	Fixed &	operator++();
	Fixed & operator--();
	Fixed 	operator++(int);
	Fixed 	operator--(int);

	static Fixed & min(Fixed & nb1, Fixed & nb2);
	static Fixed & max (Fixed & nb1, Fixed & nb2);

	static Fixed const & min(Fixed const & nb1, Fixed const & nb2);
	static Fixed const & max (Fixed const & nb1, Fixed const & nb2);

private:

	int					_value;
	static const int	_nbBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & n);

#endif
