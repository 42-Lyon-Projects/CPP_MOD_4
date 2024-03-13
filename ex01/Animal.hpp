#ifndef ANIMAL_HPP
	#define ANIMAL_HPP
	#include <string>
	class Animal
	{
		protected:
			std::string type;
		public:
			explicit Animal();
			Animal(const Animal &other);
			Animal &operator=(const Animal &other);
			virtual ~Animal();
			std::string getType() const;
			virtual void makeSound() const;
	};
#endif
