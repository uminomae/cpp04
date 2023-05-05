#ifndef WrongCAT_HPP
#define WrongCAT_HPP

#include <string>
#include "WrongAnimal.hpp"


class WrongCat:public WrongAnimal{
protected:
	std::string type;
public:
	WrongCat();
	WrongCat(const WrongCat& obj);
	WrongCat& operator =(const WrongCat& rhs);
	~WrongCat();
	
	void makeSound()const;
	std::string getType()const;

	std::string myGetClassName();
};

#endif