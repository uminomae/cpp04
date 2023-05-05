#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "CPP.hpp"

class Animal{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& obj);
	Animal& operator =(const Animal& rhs);
	
	//基底クラスとして利用する予定のクラスは、必ず仮想デストラクタを持たせる。
	//基底クラスとして使う予定がない(継承の予定がない)クラスは、仮想デストラクタを宣言しない。
	//今回はDogとCatに継承して使用するためvirtualをつける
	virtual ~Animal();
	
	virtual void makeSound()const;//<--仮想メンバー関数が存在

	virtual std::string getType()const;
	std::string myGetClassName();
};

#endif
