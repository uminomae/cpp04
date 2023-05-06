#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "CPP.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class Amateria;

class MateriaSource: public IMateriaSource{
private:
	AMateria* MatArray[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator =(const MateriaSource& rhs);
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
