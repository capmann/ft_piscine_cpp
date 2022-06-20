#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {

	std::cout << name << " is coming to life" << std::endl;

	std::cout << this->getName() << " has " << this->getHitPoints() << " hit points and " << this->getEnergyPoints() << " energy points." << std::endl;
	std::cout << this->getName() << " attack damage is set to " << this->getAttackDamage() << "." << std::endl;
	std::cout << std::endl;

	return;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad) : _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad) {

	std::cout << name << " is coming to life" << std::endl;

	std::cout << this->getName() << " has " << this->getHitPoints() << " hit points and " << this->getEnergyPoints() << " energy points." << std::endl;
	std::cout << this->getName() << " attack damage is set to " << this->getAttackDamage() << "." << std::endl;
	std::cout << std::endl;

	return;
}

ClapTrap::ClapTrap(ClapTrap const & copy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

ClapTrap::~ClapTrap() {

	std::cout << this->_name << " died..." << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {

	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(const std::string & target) {

	if (this->getEnergyPoints() > 0  && this->getHitPoints() > 0) {

		std::cout << this->_name << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage !" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() -1);
		return;
	}
	if (this->getHitPoints() <= 0)
		std::cout << this->_name << " cannot attack because he is dead." << std::endl;
	else
		std::cout << this->_name << " cannot attack because he does not have enough energy." << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	int pts;

	pts = this->_hitPoints - amount;
	if (this->getEnergyPoints() > 0  && this->getHitPoints() > 0) {

		std::cout << this->_name << " loses " << amount << " hit points." << std::endl;
		if (pts >= 0)
			this->setHitPoints(pts);
		else
			this->setHitPoints(0);
		return;
	}
	if (this->getHitPoints() <= 0)
		std::cout << this->_name << " cannot attack because he is dead." << std::endl;
	else
		std::cout << this->_name << " cannot attack because he does not have enough energy." << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	int	pts;

	if (this->getEnergyPoints() > 0  && this->getHitPoints() > 0) {

		std::cout << this->_name << " is repairing for " << amount << " hit points " << std::endl;
		pts = getHitPoints() + amount;
		this->setHitPoints(pts);
		this->setEnergyPoints(this->getEnergyPoints() -1);
		return;
	}
	std::cout << this->_name << " cannot be repaired since he is dead." << std::endl;
	return;
}

std::string	ClapTrap::getName(void) const {

	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const {

	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const {

	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const {

	return (this->_attackDamage);
}


void	ClapTrap::setName(std::string const name) {

	this->_name = name;
	return;
}

void	ClapTrap::setHitPoints(int const pts) {

	this->_hitPoints = pts;
	return;
}

void	ClapTrap::setEnergyPoints(int const pts) {

	this->_energyPoints = pts;
	return;
}

void	ClapTrap::setAttackDamage(int const pts) {

	this->_attackDamage = pts;
	std::cout << this->getName() << "'s attack damage is set to " << pts << " points." << std::endl;
	std::cout << std::endl;
	return;
}