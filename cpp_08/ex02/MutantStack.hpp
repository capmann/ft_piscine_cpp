
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T> {

	public:
		MutantStack<T>() {}
		MutantStack(MutantStack const & copy) { *this = copy; }
		~MutantStack() {}

		MutantStack	& operator=(MutantStack const & rhs) { (void)rhs; return *this; }

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end()	{ return this->c.end(); }

		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;

		reverse_iterator	rbegin() { return this->c.rbegin(); }
		reverse_iterator	rend()	{ return this->c.rend(); }

};

#endif

