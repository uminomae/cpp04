#ifndef DOG_HPP
#define DOG_HPP

// #include <string>
#include "Animal.hpp"
// #include "Test.hpp"

class Dog: public Animal{
protected:
	std::string type;
public:
	Dog();
	Dog(const Dog& obj);
	Dog& operator =(const Dog& rhs);
	~Dog();
	
	void makeSound()const;
	std::string myGetClassName();

	std::string getType()const;
};

#endif