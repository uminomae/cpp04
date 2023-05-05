#include "WrongCat.hpp"

WrongCat::WrongCat()
:type("WrongCat"){
	myPutStr(myGetClassName(), " : Default constructor called", PINK201);
}

WrongCat::WrongCat(const WrongCat& obj){
	myPutStr(myGetClassName(), " : Copy constructor called", PINK201);
	*this = obj;
}

WrongCat& WrongCat::operator =(const WrongCat& rhs){
	myPutStr(myGetClassName(), " : Copy assignment operator called", PINK201);
	if (this != &rhs)
		type = rhs.type;
	return *this;
}

WrongCat::~WrongCat(){
	myPutStr(myGetClassName(), " : Destructor called", PINK201);
}

std::string WrongCat::myGetClassName(){
	std::string ret = typeid(*this).name();
	ret = ret.substr(1, ret.size()-1);
	return ret;
}


void WrongCat::makeSound()const{
	myPutStr("WrongCat::", "doesn't bark", PINK198);
}

std::string WrongCat::getType()const{
	return type;
}