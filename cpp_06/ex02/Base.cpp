#include "Base.hpp"
#include "Children.hpp"
#include <ctime>
#include <cstdlib>

Base::~Base() {}

Base*	generate(void) {

	std::srand(std::time(NULL));
	int	rd = 1 + std::rand() % 3;

	if (rd == 1)
	{
		std::cout << 'A' << std::endl;
		return new A;
	}
	else if (rd == 3)
	{
		std::cout << 'B' << std::endl;
		return new B;
	}
	std::cout << 'C' << std::endl;
	return new C;
}

void	identify(Base *p) {

	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	return;
}

void	identify(Base& p) {

	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	} catch (std::exception &e) {}

	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	} catch (std::exception &e) {}

	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	} catch (std::exception &e) {}

	return;
}
