
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

private:

	int					_value;
	static const int	_nbBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & n);

#endif
