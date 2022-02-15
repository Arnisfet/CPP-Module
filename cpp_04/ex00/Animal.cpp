//
// Created by arnisfet on 15.02.2022.
//

#include "Animal.h"

Animal::Animal(): _type("????") {
	std::cout << "Animal constructor." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor." << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type){
	std::cout << "Animal copy constructor." << std::endl;
}

Animal & Animal::operator=(const Animal &other) {
	if (this != &other)
	{
		std::cout << "Animal copy assignment operator." << std::endl;
		_type = other._type;
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << "????" << std::endl;
}

const std::string & Animal::getType() const {
	return _type;
}