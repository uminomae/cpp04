#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat:public Animal{
protected:
	std::string type;
public:
	Cat();
	Cat(const Cat& obj);
	Cat& operator =(const Cat& rhs);
	~Cat();
	
	void makeSound()const;
	std::string getType()const;

	std::string myGetClassName();
};

#endif