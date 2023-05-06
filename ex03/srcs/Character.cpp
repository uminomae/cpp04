#include "Character.hpp"

Character::Character(std::string const & Name){
	this->Name = Name;
	int i = 0;
	while (i < 4){
		slot[i] = NULL;
		i++;
	}
}

Character::Character(){
}

Character::Character(const Character& obj){
	*this = obj;
}

Character& Character::operator =(const Character& rhs){
	if (this != &rhs){
		Name = rhs.Name;
		for (int i=0; i<4; ++i){
			slot[i] = rhs.slot[i];
		}
	}
	return *this;
}

Character::~Character(){
	for (int i=0; i<4; ++i)
		delete slot[i];
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
	if (0 <= idx && idx <= 3)
		slot[idx] = 0;
}

void Character::use(int idx, ICharacter& target){
	if (!slot[idx])
		return;
	slot[idx]->use(target);
}
