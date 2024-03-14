#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new(std::nothrow) Brain();
	if (!this->brain)
	{
		std::cout << "Failed to allocate memory for brain" << std::endl;
		return ;
	}
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	this->brain = other.brain;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	if (this->brain)
		delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	this->brain = other.brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "WOUAF WOUAF" << std::endl;
}

Brain *Dog::getBrain()
{
	return this->brain;
}