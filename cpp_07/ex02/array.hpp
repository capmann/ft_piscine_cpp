
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cfloat>


template<typename T>
class array {

	public:

		array() : _size(0), _tab(new T[0]()) {};
		array(unsigned int n) : _size(n), _tab(new T[n]()) {};
		array(array const & copy) {

			this->_tab = new T[copy.size()]();
			this->_size = copy._size;

			unsigned int	i = -1;
			while (++i < this->size())
				this->_tab[i] = copy._tab[i];
		};
		~array() {delete [] _tab;};

		array	&operator=(const array& rhs) {

			this->_tab = new T[rhs.size()]();
			this->_size = rhs._size;

			unsigned int i = -1;
			while (++i < this->size())
				this->_tab[i] = rhs._tab[i];
			return (this);
		};

		unsigned int	size(void) const {

			return (this->_size);
		};

		T&	operator[](unsigned int i) {

			if (i > static_cast<unsigned int>(this->_size) - 1)
				throw arrayException();
			return (this->_tab[i]);
		};

	class arrayException : public std::exception {

		public:
			
			virtual const char* what() const throw() {

				return ("Error: cannot access this memory zone");
			}
	};
	
	private:

		unsigned int		_size;
		T*					_tab;
};

#endif

