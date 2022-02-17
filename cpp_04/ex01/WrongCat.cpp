//
// Created by arnisfet on 17.02.2022.
//

#include "Cat.h"

WrongCat::WrongCat()
{
	std::cout << "Default Wrongcat constructor\n";
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor\n";
	_type = other._type;
}

WrongCat::~WrongCat()
{
	std::cout << "Default Wrongcat destructor\n";
}

WrongCat &WrongCat::operator=(const WrongCat other){
	if (this != &other)
	{
		std::cout << "WrongCat copy assigment operator\n";
		_type = other._type;
	}
	return *this;
}
void WrongCat::makeSound() const
{
	std::cout << "WOOOOOOOOOOOOOOOFF!!\n";
}