//
// Created by arnisfet on 15.02.2022.
//
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();//will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;
	delete meta;
	delete i;

	const WrongAnimal *ptr = new WrongCat();
	std::cout << ptr->getType() << " \n";
	ptr->makeSound(); // will output the dog sound!:))
	delete ptr;
	return 0;
}