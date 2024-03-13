#include "Cat.hpp"
#include <iostream>

#include "Dog.hpp"

int main()
{
	const Animal* cat = new Cat();
	std::cout << "TYPE: " << cat->getType() << std::endl;
	cat->makeSound();
	delete cat;

	const Cat cat2;
	std::cout << "TYPE: " << cat2.getType() << std::endl;
	cat2.makeSound();

	const Animal* meta = new Animal();
	meta->makeSound();
	delete meta;

	const Animal* dog = new Dog();
	std::cout << "TYPE: " << dog->getType() << std::endl;
	dog->makeSound();
	delete dog;

	const Dog dog2;
	std::cout << "TYPE: " << dog2.getType() << std::endl;
	dog2.makeSound();


	return 0;
}
