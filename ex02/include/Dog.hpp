#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
protected:
	std::string type;
	Brain* brain;
public:
	Dog();
	Dog(const Dog& obj);
	Dog& operator =(const Dog& rhs);
	~Dog();
	
	void makeSound()const;
	std::string getType()const;
	void setType(std::string s);
	std::string myGetClassName();
};

#endif