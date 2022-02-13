//
// Created by arnisfet on 07.02.2022.
//

#ifndef CPP_02_FIXED_HPP
#define CPP_02_FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed const &num);
	~Fixed();
	Fixed & operator=(const Fixed &other);

	int getRawBits(void) const;
	void setRawBits(int const raw);
private:
	int fixed_point;
	static const int f_bits = 8;
};


#endif //CPP_02_FIXED_HPP
