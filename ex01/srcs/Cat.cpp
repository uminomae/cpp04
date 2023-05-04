#include "Cat.hpp"

Cat::Cat()
:type("Cat"){
	myPutStr(myGetClassName(), " : Default constructor called", PINK201);
}

Cat::Cat(const Cat& obj){
	myPutStr(myGetClassName(), " : Copy constructor called", PINK201);
	*this = obj;
}

Cat& Cat::operator =(const Cat& rhs){
	myPutStr(myGetClassName(), " : Copy assignment operator called", PINK201);
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

Cat::~Cat(){
	myPutStr(myGetClassName(), " : Destructor called", PINK201);
}

std::string Cat::myGetClassName(){
	std::string ret = typeid(*this).name();
	ret = ret.substr(1, ret.size()-1);
	return ret;
}


void Cat::makeSound()const{
	myPutStr("Cat::", "doesn't bark", PINK198);
}

std::string Cat::getType()const{
	return type;
}