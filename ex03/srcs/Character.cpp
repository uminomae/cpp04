#include "Character.hpp"

Character::Character(std::string const & Name){
	this->Name = Name;
}

Character::Character(){
}

Character::Character(const Character& obj){
	*this = obj;
}

Character& Character::operator =(const Character& rhs){
	if (this != &rhs)
		Name = rhs.Name;
	return *this;
}

Character::~Character(){
}


std::string const & Character::getName() const{
	return Name;
}

void Character::equip(AMateria* m){
	if (!m)
		return;
	int i;
	for (i=0; i<4; ++i)
		if (!slot[i])
			break;
	if (i != 4)
		slot[i] = m;
}

void Character::unequip(int idx){
	if (!slot[idx])
		return;
	slot[idx] = 0;
}

void Character::use(int idx, ICharacter& target){
	if (!slot[idx])
		return;
	slot[idx]->use(target);
}
