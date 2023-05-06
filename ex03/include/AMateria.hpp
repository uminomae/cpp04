#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "CPP.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class ICharacter;

class AMateria{
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	AMateria();
	virtual ~AMateria();

	virtual std::string const & getType() const = 0; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target)= 0;
};

#endif