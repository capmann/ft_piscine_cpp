
#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cfloat>

template<typename T>
void	print(T const & x) {

	std::cout << x << " ";
	return;
}

template<typename T>
void	toInt(T const & x) {

	std::cout << static_cast<int>(x) << " ";
	return;
}

template<typename T>
void	multiplyByTwo(T const & x) {

	std::cout << x * 2 << " ";
	return;
}

template<typename T>
void	iter(T (*ptr), int size, void (*fct)(T const &)) {

	int i = -1;

	while (++i < size)
		fct(ptr[i]);
	return;
}

#endif

