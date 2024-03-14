#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new (std::nothrow) Brain();
	if (!this->brain)
	{
		std::cout << "Failed to allocate memory for brain" << std::endl;
		return ;
	}
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
	this->brain = other.brain;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	if (this->brain)
		delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	this->brain = other.brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}

Brain *Cat::getBrain()
{
	return this->brain;
}