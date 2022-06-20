
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

class	valueNotFound : public std::exception {

	public:
		virtual const char* what() const throw() {

			return ("Value was not found in the container");
		}
};

template<typename T>
typename T::const_iterator	easyFind(T const & list, int const & i) {

	typename T::const_iterator	it = std::find(list.begin(), list.end(), i);
	
	if (it == list.end())
		throw valueNotFound();
	return (it);
}

#endif

