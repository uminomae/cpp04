#include "Cure.hpp"

Cure::Cure(){
	type = "cure";
}

Cure::Cure(const Cure& obj){
	*this = obj;
}

Cure& Cure::operator =(const Cure& rhs){
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

Cure::~Cure(){
}


std::string const& Cure::getType()const{
	return this->type;
}

AMateria* Cure::clone()const{
	return new Cure();
}

void Cure::use(ICharacter& target){
	std::cout
	<< "* heals "
	<< target.getName()
	<< "'s wounds *"
	<< std::endl;
}
