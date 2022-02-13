//
// Created by arnisfet on 07.02.2022.
//

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called";
	fixed_point = 0;
	std::cout << std::endl;
}

Fixed::Fixed(Fixed const &num)
{
	std::cout << "Copy Constructor called\n";
	*this = num;
}

Fixed::~Fixed()
{
	std::cout << std::endl;
	std::cout << "Destructor is called";
}


Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->fixed_point = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point;
}


void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point = raw;
}