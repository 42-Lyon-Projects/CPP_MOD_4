#ifndef AMATERIA_HPP
#define AMATERIA_HPP

	#include <string>
	class ICharacter;

	class AMateria
	{
		protected:
			std::string type;
		public:
			AMateria(std::string const & type);
			AMateria(const AMateria &other);
			~AMateria();
			std::string const & getType() const; //Returns the materia type
			AMateria& operator=(const AMateria &other);
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
	};

#endif //AMATERIA_HPP
