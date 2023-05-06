#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "CPP.hpp"
#include "AMateria.hpp"

class AMateria;

class Character: public ICharacter{
private:
	std::string Name;
	AMateria* slot[4];
public:
	Character(std::string const & Name);
	Character();
	Character(const Character& obj);
	Character& operator =(const Character& rhs);
	~Character();
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif