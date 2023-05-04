#include "Dog.hpp"

Dog::Dog()
:type("Dog"){
	myPutStr(myGetClassName(), " : Default constructor called", PINK198);
}

Dog::Dog(const Dog& obj){
	myPutStr(myGetClassName(), " : Copy constructor called", PINK198);
	*this = obj;
}

Dog& Dog::operator =(const Dog& rhs){
	myPutStr(myGetClassName(), " : Copy assignment operator called", PINK198);
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

Dog::~Dog(){
	myPutStr(myGetClassName(), " : Destructor called", PINK198);
}

std::string Dog::myGetClassName(){
	std::string ret = typeid(*this).name();
	ret = ret.substr(1, ret.size()-1);
	return ret;
}

void Dog::makeSound()const{
	myPutStr("Dog::", "Bow", PINK198);
}

std::string Dog::getType()const{
	return type;
}