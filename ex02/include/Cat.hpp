#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal{
private:
	std::string type;
	Brain* brain;
public:
	Cat();
	Cat(const Cat& obj);
	Cat& operator =(const Cat& rhs);
	~Cat();
	
	void makeSound()const;
};

#endif