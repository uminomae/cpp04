#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include "CPP.hpp"

class WrongAnimal{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& obj);
	WrongAnimal& operator =(const WrongAnimal& rhs);
	~WrongAnimal();
	
	void makeSound()const;
	// virtual void makeSound()const;
	
	std::string myGetClassName();
	std::string getType()const;
	// virtual std::string getType()const;
};

#endif
