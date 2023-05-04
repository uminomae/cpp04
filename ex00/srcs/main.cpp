#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define TEST1

int main(){

	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		const WrongAnimal* WrongMeta = new WrongAnimal();
		const WrongCat* k = new WrongCat();
		k->makeSound();
		WrongMeta->makeSound();
	}
#ifdef TEST1
	test1();
#endif

	return 0;
}


void test1(){
	{
		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST1 ", "", PINK198);
		myPutStr("=========", "===========", PINK198);

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST1 case : subject ", "", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== ", "const Animal* meta = new Animal();", PINK136);
		const Animal* meta = new Animal();
		myPutStr("=== ", "const Animal* j = new Dog();", PINK136);
		const Animal* j = new Dog();
		myPutStr("=== ", "const Animal* i = new Cat();", PINK136);
		const Animal* i = new Cat();
		myPutStr("=== ", "std::cout << j->getType() << " " << std::endl;", PINK136);
		std::cout << j->getType() << " " << std::endl;
		myPutStr("=== ", "std::cout << i->getType() << " " << std::endl;", PINK136);
		std::cout << i->getType() << " " << std::endl;
		myPutStr("=== ", "i->makeSound();", PINK136);
		i->makeSound(); //will output the cat sound!
		myPutStr("=== ", "j->makeSound();", PINK136);
		j->makeSound();
		myPutStr("=== ", "meta->makeSound();", PINK136);
		meta->makeSound();

		myPutStr("=== ", "const WrongAnimal* WrongMeta = new WrongAnimal();", PINK136);
		const WrongAnimal* WrongMeta = new WrongAnimal();
		myPutStr("=== ", "const WrongCat* k = new WrongCat();", PINK136);
		const WrongCat* k = new WrongCat();
		myPutStr("=== ", "k->makeSound();", PINK136);
		k->makeSound();
		myPutStr("=== ", "WrongMeta->makeSound();", PINK136);
		WrongMeta->makeSound();
	}
}


void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}


// ex00
// For every exercise, you have to provide the most complete tests you can.
// Constructors and destructors of each class must display specific messages. 
// Don’t use the same message for all classes.
// Start by implementing a simple base class called Animal. 
// すべての演習について、できる限り完全なテストを提供する必要があります。
// 各クラスのコンストラクタとデストラクタは、特定のメッセージを表示する必要があります。 すべてのクラスに同じメッセージを使用しないでください。
// まず、Animal という単純な基本クラスを実装します。


// It has one protected attribute:
// • std::string type;
// Implement a Dog class that inherits from Animal.
// Implement a Cat class that inherits from Animal.

// 保護された属性が 1 つあります。
// • std::文字列型。
// Animal を継承する Dog クラスを実装します。
// Animal を継承する Cat クラスを実装します。


// These two derived classes must set their type field depending on their name. 
// Then,the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
// The type of the Animal class can be left empty or set to the value of your choice.
// これら 2 つの派生クラスは、名前に応じて型フィールドを設定する必要があります。
// 次に、Dog のタイプは「Dog」に、Cat のタイプは「Cat」に初期化されます。
// Animal クラスのタイプは、空のままにするか、選択した値に設定できます。


// Every animal must be able to use the member function:
// makeSound()
// It will print an appropriate sound (cats don’t bark).
// すべての動物はメンバー関数を使用できる必要があります。
// makeSound()
// 適切な音を出力します (猫は吠えません)。

// Running this code should print the specific sounds of the Dog and Cat classes, not
// the Animal’s.
// このコードを実行すると、Dog クラスと Cat クラスの特定のサウンドが出力されます。
// その動物たち。

// To ensure you understood how it works, implement a WrongCat class that inherits　from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones
// in the code above, the WrongCat should output the WrongAnimal sound.
// Implement and turn in more tests than the ones given above.
// その仕組みを確実に理解するには、WrongAnimal クラスから継承した WrongCat クラスを実装してください。 
// 動物と猫を間違ったものに置き換えた場合上記のコードでは、WrongCat が WrongAnimal サウンドを出力する必要があります。
// 上記以外のテストを実装して提出します。