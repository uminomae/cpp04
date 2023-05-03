#include "Animal.hpp"

Animal::Animal()
:type(""){
	myPutStr(myGetClassName(), " : Default constructor called", PINK183);
	// myPutStr("", "Base class Animal : Default constructor called", PINK183);
}

Animal::Animal(const Animal& obj){
	myPutStr(myGetClassName(), " : Copy constructor called", PINK183);
	// myPutStr("", "Base class Animal : Copy constructor called", PINK183);
	*this = obj;
}

Animal& Animal::operator =(const Animal& rhs){
	myPutStr(myGetClassName(), " : Copy assignment operator called", PINK183);
	// myPutStr("", "Base class Animal : Copy assignment operator called", PINK183);
	type = rhs.type;
	return *this;
}

Animal::~Animal(){
	myPutStr(myGetClassName(), " : Destructor called", PINK183);
	// myPutStr("", "Base class Animal : Destructor called", PINK183);
}

std::string Animal::myGetClassName(){
	std::string ret = typeid(*this).name();
	ret = ret.substr(1, ret.size()-1);
	return ret;
}
