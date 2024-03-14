#include "Cat.hpp"
#include <iostream>
#include "Dog.hpp"

int main()
{
	 Animal *animalsArray[10];

	for (int i = 0; i < 5; ++i)
		animalsArray[i] = new Cat();
	for (int i = 5; i < 10; ++i)
		animalsArray[i] = new Dog();
	for (int i = 0; i < 10; ++i)
		animalsArray[i] ->makeSound();

	for (int i = 0; i < 5; ++i)
	{
		Cat* cat = static_cast<Cat *>(animalsArray[i]);
		cat->getBrain()->setIdea(0, "Miaou Miaou");
	}

	 for (int i = 5; i < 10; ++i)
	 {
		 Dog *dog = static_cast<Dog *>(animalsArray[i]);
	 	dog->getBrain()->setIdea(0, "Woof Woof");
	 }

	for (int i = 0; i < 5; ++i)
	{
		Cat* cat = static_cast<Cat *>(animalsArray[i]);
		std::cout << "Cat idea: " << cat->getBrain()->getIdea(0) << std::endl;
	}

	for (int i = 5; i < 10; ++i)
	{
		Dog* dog = static_cast<Dog *>(animalsArray[i]);
		std::cout << "Dog idea: " << dog->getBrain()->getIdea(0) << std::endl;
	}

	for (int i = 0; i < 10; ++i)
	{
		delete animalsArray[i];
	}


	return 0;
}
