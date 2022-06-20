
#ifndef CHILDREN_HPP
# define CHILDREN_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <cfloat>


class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif

