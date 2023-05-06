#include "Ice.hpp"

Ice::Ice(){
	type = "ice";
}

Ice::Ice(const Ice& obj){
	*this = obj;
}

Ice& Ice::operator =(const Ice& rhs){
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

Ice::~Ice(){
}


std::string const& Ice::getType()const{
	return this->type;
}

AMateria* Ice::clone()const{
	return new Ice();
}

void Ice::use(ICharacter& target){
	std::cout
	<< "* shoots an ice bolt at "
	<< target.getName()
	<< " *"
	<< std::endl;
}
