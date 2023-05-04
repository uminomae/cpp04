#include "Cat.hpp"

Cat::Cat()
:type("Cat"){
	brain = new Brain();
	myPutStr(myGetClassName(), " : Default constructor called", PINK201);
}

Cat::Cat(const Cat& obj){
	*this = obj;
	myPutStr(myGetClassName(), " : Copy constructor called", PINK201);
}

Cat& Cat::operator =(const Cat& rhs){
	if (this != &rhs){
		type = rhs.type;
		brain = new Brain();
	}
	myPutStr(myGetClassName(), " : Copy assignment operator called", PINK201);
	return *this;
}

Cat::~Cat(){
	delete brain;
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

void Cat::setType(std::string s){
	type = s;
}
