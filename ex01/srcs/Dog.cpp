#include "Dog.hpp"

Dog::Dog()
:type("Dog"){
	brain = new Brain();
	myPutStr(myGetClassName(), " : Default constructor called", PINK198);
}

Dog::Dog(const Dog& obj){
	*this = obj;
	myPutStr(myGetClassName(), " : Copy constructor called", PINK198);
}

Dog& Dog::operator =(const Dog& rhs){
	if (this != &rhs){
		type = rhs.type;
		brain = new Brain();
	}
	myPutStr(myGetClassName(), " : Copy assignment operator called", PINK198);
	return *this;
}

Dog::~Dog(){
	delete brain;
	myPutStr(myGetClassName(), " : Destructor called", PINK198);
}


void Dog::makeSound()const{
	myPutStr("Dog::", "Bow", PINK198);
}
