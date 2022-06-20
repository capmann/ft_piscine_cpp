
#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cfloat>


class	convert {

	public:

		convert();
		convert(const convert& copy);
		virtual ~convert();

		convert&	operator=(const convert& rhs);

		bool	isNumber(char*	param);
		bool	isChar(char*	param);

		float	toFloat(float n);
		int		toInt(float n);
		double	toDouble(float n);
		char	toChar(float n);

	class notConvertible : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return("Impossible conversion");
			}
	};
};

#endif

