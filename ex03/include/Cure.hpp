#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria{
public:
	Cure();
	Cure(const Cure& obj);
	Cure& operator =(const Cure& rhs);
	~Cure();

	std::string const & getType() const; //Returns the materia type
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif