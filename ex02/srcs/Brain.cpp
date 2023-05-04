#include "Brain.hpp"

Brain::Brain(){
	myPutStr(myGetClassName(), " : Default constructor called", PINK170);
	for (int i=0; i<100; ++i)
		ideas[i] = "idea" + std::to_string(i);
}

Brain::Brain(const Brain& obj){
	myPutStr(myGetClassName(), " : Copy constructor called", PINK170);
	*this = obj;
}

Brain& Brain::operator =(const Brain& rhs){
	myPutStr(myGetClassName(), " : Copy assignment operator called", PINK170);
	if (this != &rhs){
		for (int i=0; i<100; ++i)
			ideas[i] = rhs.getIdeas(i);
	}
	return *this;
}

Brain::~Brain(){
	myPutStr(myGetClassName(), " : Destructor called", PINK170);
}

std::string Brain::myGetClassName(){
	std::string ret = typeid(*this).name();
	ret = ret.substr(1, ret.size()-1);
	return ret;
}


std::string Brain::getIdeas(int i)const{
	return ideas[i];
}

void Brain::setIdeas(int i, std::string s){
	ideas[i] = s;
}
