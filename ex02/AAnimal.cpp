#include "AAnimal.hpp"

#include <iostream>

AAnimal::AAnimal()
{
	std::cout << "Animal constructor called" << std::endl;
}
AAnimal::AAnimal(const AAnimal &other) : type(other.type) {}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	this->type = other.type;
	return *this;
}

std::string AAnimal::getType() const
{
	return this->type;
}

void AAnimal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}