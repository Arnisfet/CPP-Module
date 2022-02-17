//
// Created by arnisfet on 15.02.2022.
//

#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H

#include <iostream>
#include <string>

class Animal {
public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();

	Animal &operator=(const Animal& other);
	virtual void makeSound() const;
	virtual const std::string& getType() const;

protected:
	std::string _type;
};

class WrongAnimal{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal();

	WrongAnimal &operator=(const WrongAnimal& other);
	virtual void makeSound() const;
	virtual const std::string& getType() const;

protected:
	std::string _type;
};

#endif //EX00_ANIMAL_H
