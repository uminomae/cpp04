#include "Animal.hpp"

Animal::Animal()
:type("Animal"){
	myPutStr(myGetClassName(), " : Default constructor called", PINK170);
}

Animal::Animal(const Animal& obj){
	myPutStr(myGetClassName(), " : Copy constructor called", PINK170);
	*this = obj;
}

Animal& Animal::operator =(const Animal& rhs){
	myPutStr(myGetClassName(), " : Copy assignment operator called", PINK170);
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

Animal::~Animal(){
	myPutStr(myGetClassName(), " : Destructor called", PINK170);
}

std::string Animal::myGetClassName(){
	std::string ret = typeid(*this).name();
	ret = ret.substr(1, ret.size()-1);
	return ret;
}


	
void Animal::makeSound()const{
	myPutStr("Animal::", "howl", PINK198);
}

std::string Animal::getType()const{
	return type;
}