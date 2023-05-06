#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria{
public:
	Ice();
	Ice(const Ice& obj);
	Ice& operator =(const Ice& rhs);
	~Ice();

	std::string const & getType() const; //Returns the materia type
	AMateria* clone()const;
	void use(ICharacter& target);
};

#endif