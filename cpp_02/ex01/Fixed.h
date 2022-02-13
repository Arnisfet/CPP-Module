//
// Created by VKoliukh on 09.02.2022.
//

#ifndef EX01_FIXED_H
#define EX01_FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();
    Fixed(const int x);
    Fixed(const Fixed &other);
    Fixed(float const f);
    ~Fixed();

    Fixed & operator=(const Fixed &other);

    int getRawBits() const;
    void setRawBits(int raw);

    float toFloat(void) const;
    int toInt(void) const;

private:
    int fixedPointValue;
    static const int NUM_FRAC_BITS = 8;
};

std::ostream &operator<<(std::ostream &ostream, Fixed const &fixed);

#endif //EX01_FIXED_H
