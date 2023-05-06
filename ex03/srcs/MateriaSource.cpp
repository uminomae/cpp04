#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource(){
	int i = 0;
	while (i < 4){
		MatArray[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj){
	*this = obj;
}

MateriaSource& MateriaSource::operator =(const MateriaSource& rhs){
	if (this != &rhs){
		int i;
		for (i=0; i<4; ++i){
			if (!MatArray[i])
				break;
			delete MatArray[i];
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	int i;
	for (i=0; i<4; ++i){
		if (!MatArray[i])
			break;
		delete MatArray[i];
	}
}


void MateriaSource::learnMateria(AMateria* ptr){
	int i;
	for (i=0; i<4; ++i)
		if (!MatArray[i])
			break;
	if (i == 4)
		MatArray[3] = ptr;
	else
		MatArray[i] = ptr;
}

AMateria* MateriaSource::createMateria(std::string const & type){
	AMateria* ret = NULL;
	if (type == "cure")
		ret = new Cure();
	else if (type == "ice")
		ret = new Ice();
	else
		ret = 0;
	return ret;
}