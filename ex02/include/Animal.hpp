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
	
	virtual void makeSound()const = 0;
	
	std::string myGetClassName();
	std::string getType()const;
	void setType(std::string s);
};


#endif
