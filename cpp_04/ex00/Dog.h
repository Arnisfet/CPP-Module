//
// Created by arnisfet on 15.02.2022.
//

#ifndef EX00_DOG_H
#define EX00_DOG_H

#include "Animal.h"
class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog other);
	void makeSound() const;
};


#endif //EX00_DOG_H
