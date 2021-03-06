//
// Created by arnisfet on 15.02.2022.
//

#ifndef EX00_CAT_H
#define EX00_CAT_H

#include "Animal.h"
class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat other);
	void makeSound() const;
};

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat other);
	void makeSound() const;
};

#endif //EX00_CAT_H
