
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

class Span {

	private:
		unsigned int		_size;
		std::vector<int>	_container;
		Span();

	public:
		Span(unsigned int n);
		Span(Span const & copy);
		~Span();

		Span	& operator=(Span const & rhs);
	
		void				addNumber(int n);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();
		void				fillContainer(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		std::vector<int>	getContainer();

	class	NoSpaceException : public std::exception {

		public:
			virtual const char* what() const throw() {

				return ("Error: No space available to store this element");
			}
	};

	class	NotEnoughElementsException : public std::exception {

		public:
			virtual const char* what() const throw() {

				return ("Error: Not enough elements to compare");
			}
	};

};

#endif

