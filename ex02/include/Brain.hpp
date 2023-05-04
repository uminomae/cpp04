#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <CPP.hpp>

class Brain{
protected:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& obj);
	Brain& operator =(const Brain& rhs);
	~Brain();
	
	std::string getIdeas(int)const;
	void setIdeas(int i, std::string s);
	
	std::string myGetClassName();
};

#endif