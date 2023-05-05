#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
private:
	std::string type;
	Brain* brain;
public:
	Dog();
	Dog(const Dog& obj);
	Dog& operator =(const Dog& rhs);
	~Dog();
	
	void makeSound()const;
};

#endif