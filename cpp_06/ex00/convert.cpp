#include "convert.hpp"


convert::convert() {}

convert::convert(const convert& copy) {

	*this = copy;
	return;
}

convert::~convert() {}

convert&	convert::operator=(const convert & rhs) {

	(void)rhs;
	return (*this);
}

bool	convert::isNumber(char*	param) {

	std::string str = param;
	return (str.find_first_not_of("0123456789"));
}

bool	convert::isChar(char*	param) {

	std::string str = param;
	return (str.size() == 1 && isalpha(str[0]));
}

float	convert::toFloat(float f) {

	return (static_cast<float>(f));
}

double	convert::toDouble(float f) {

	return (static_cast<double>(f));
}

int		convert::toInt(float f) {

	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string ("impossible");
	return (static_cast<int>(f));
}

char	convert::toChar(float f) {

	char c = static_cast<char>(f);
	if (f == std::numeric_limits<float>::infinity()
		|| f == -std::numeric_limits<float>::infinity()
		|| std::isnan(f))
		throw std::string ("impossible");
	else if (c < 32 || c > 126)
		throw std::string ("Non displayable");
	return (c);
}


