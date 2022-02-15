//
// Created by arnisfet on 15.02.2022.
//

#include "Dog.h"

Dog::Dog()
{
	std::cout << "Default dog constructor\n";
	_type = "Dog";
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog copy constructor\n";
	_type = other._type;
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