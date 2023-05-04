#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "CPP.hpp"

class Animal{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& obj);
	Animal& operator =(const Animal& rhs);
	virtual ~Animal();
	
	virtual void makeSound()const;
	std::string myGetClassName();
	virtual std::string getType()const;
};


#endif
