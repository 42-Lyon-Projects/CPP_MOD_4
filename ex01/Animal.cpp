#include "Animal.hpp"

#include <iostream>

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal &other) : type(other.type) {}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}