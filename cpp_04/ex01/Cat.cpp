//
// Created by arnisfet on 15.02.2022.
//

#include "Cat.h"

Cat::Cat()
{
	std::cout << "Default cat constructor\n";
	this->brain = new Brain();
	_type = "Cat";
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "Cat copy constructor\n";
	_type = other._type;
}

Cat::~Cat()
{
	std::cout << "Default cat destructor\n";
	delete this->brain;
}

Cat &Cat::operator=(const Cat other)
{
	if (this != &other)
	{
		std::cout << "Cat copy assigment operator\n";
		_type = other._type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow!!\n";
}

Brain *Cat::getBrain(void) const{
	return (this->brain);
}