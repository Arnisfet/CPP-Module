//
// Created by arnisfet on 15.02.2022.
//

#include "Dog.h"

Dog::Dog()
{
	std::cout << "Default dog constructor\n";
	this->brain = new Brain();
	_type = "Dog";
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog copy constructor\n";
	_type = other._type;
	delete this->brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor\n";
}

Dog &Dog::operator=(const Dog other)
{
	if (this != &other)
	{
		std::cout << "Dog copy assigment operator\n";
		_type = other._type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wow!!\n";
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}