//
// Created by arnisfet on 17.02.2022.
//

#include "Animal.h"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type){
	std::cout << "WrongAnimal copy constructor." << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other)
	{
		std::cout << "WrongAnimal copy assignment operator." << std::endl;
		_type = other._type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal ????" << std::endl;
}

const std::string & WrongAnimal::getType() const {
	return _type;
}