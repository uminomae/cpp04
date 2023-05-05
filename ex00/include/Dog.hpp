#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
protected:
	std::string type;
public:
	Dog();
	Dog(const Dog& obj);
	Dog& operator =(const Dog& rhs);
	~Dog();
	
	void makeSound()const;

	std::string getType()const;
	std::string myGetClassName();
};

#endif