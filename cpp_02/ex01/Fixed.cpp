//
// Created by VKoliukh on 09.02.2022.
//

#include "Fixed.h"



#define FIXED_POINT_ONE (1 << 8)


Fixed::Fixed() : fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int x) {
    std::cout << "Int constructor called" << std::endl;
    fixedPointValue = (x << NUM_FRAC_BITS);
}

Fixed::Fixed(const float f)  {
    std::cout << "Float constructor called" << std::endl;
    fixedPointValue = std::roundf(f * FIXED_POINT_ONE);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    return fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    fixedPointValue = raw;
}

Fixed::Fixed(Fixed const &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->fixedPointValue = other.getRawBits();
    return *this;
}

float Fixed::toFloat(void) const {
    return (float )fixedPointValue / FIXED_POINT_ONE;
}

int Fixed::toInt(void) const {
    return fixedPointValue >> NUM_FRAC_BITS;
}

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed) {
    ostream << fixed.toFloat();
    return ostream;
}