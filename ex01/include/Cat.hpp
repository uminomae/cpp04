#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat:public Animal{
protected:
	std::string type;
	Brain* brain;
public:
	Cat();
	Cat(const Cat& obj);
	Cat& operator =(const Cat& rhs);
	~Cat();
	
	void makeSound()const;
	std::string getType()const;
	void setType(std::string s);
	std::string myGetClassName();
};

#endif