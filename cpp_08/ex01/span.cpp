#include "span.hpp"
#include <algorithm>
#include <vector>
#include <set>

Span::Span(unsigned int n) : _size(n) {}
Span::Span(Span const & copy) { 
	
	this->_size = copy._size;
	this->_container = copy._container;
}
Span & Span::operator=(Span const & rhs) { 

	if (this != &rhs) {
		this->_size = rhs._size; 
		this->_container = rhs._container; 
	}
	return (*this); 
}
Span::~Span() {}

std::vector<int>	Span::getContainer() { return this->_container; }

void	Span::addNumber(int n) {

	if (this->_container.size() >= this->_size)
		throw Span::NoSpaceException();
	this->_container.push_back(n);
}

unsigned int	Span::longestSpan() {

	if (this->_size < 2)
		throw Span::NotEnoughElementsException();
	std::sort(this->_container.begin(), this->_container.end());
	return (this->_container.back() - this->_container.front());
}

unsigned int	Span::shortestSpan() {

	if (this->_size < 2)
		throw Span::NotEnoughElementsException();

	std::sort(this->_container.begin(), this->_container.end());

	std::vector<int>::iterator	it = this->_container.begin();
	std::vector<int>::iterator	ite = this->_container.end();
	std::vector<int>::iterator	itNext = ++this->_container.begin();

	int	span = *(itNext) - *(it);

	while (itNext != ite)
	{
		if (*(itNext) - *(it) < span)
			span = *(itNext) - *(it);
		it = itNext;
		itNext++;
	}
	return (span);
}

void	Span::fillContainer(std::vector<int>::iterator begin, std::vector<int>::iterator end) {

	if (this->_size < std::distance(begin, end))
		throw Span::NoSpaceException();
	this->_container.insert(this->_container.end(), begin, end);
}