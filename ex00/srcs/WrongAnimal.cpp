#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
:type("WrongAnimal"){
	myPutStr(myGetClassName(), " : Default constructor called", PINK170);
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj){
	myPutStr(myGetClassName(), " : Copy constructor called", PINK170);
	*this = obj;
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal& rhs){
	myPutStr(myGetClassName(), " : Copy assignment operator called", PINK170);
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	myPutStr(myGetClassName(), " : Destructor called", PINK170);
}

std::string WrongAnimal::myGetClassName(){
	std::string ret = typeid(*this).name();
	ret = ret.substr(2, ret.size()-2);
	return ret;
}


	
void WrongAnimal::makeSound()const{
	myPutStr("WrongAnimal::", "howl", PINK198);
}

std::string WrongAnimal::getType()const{
	return type;
}