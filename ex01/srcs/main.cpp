// #include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "CPP.hpp"


// #define MY_TEST1

void test1(){
	{
		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST1 ", "", PINK198);
		myPutStr("=========", "===========", PINK198);

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST1 ", "", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== ", "Animal a;", PINK136);
		Animal a;
		myPutStr("=== ", "Animal b(a);;", PINK136);
		Animal b(a);
		myPutStr("=== ", "Animal c;", PINK136);
		Animal c;
		myPutStr("=== ", "c = b;", PINK136);
		c = b;


		myPutStr("=== ", "c.makeSound();", PINK136);
		c.makeSound();

		myPutStr("=== ", "Animal Dog;", PINK136);
		Dog dog;
		dog.makeSound();
		myPutStr("=== ", "dog.getType()", PINK136);
		std::cout << dog.getType() << " " << std::endl;

		myPutStr("=== ", "Animal cat;", PINK136);
		Cat cat;
		cat.makeSound();
		myPutStr("=== ", "cat.getType()", PINK136);
		std::cout << cat.getType() << " " << std::endl;
		
		myPutStr("=== ", "end scope", PINK136);
	}
}

int main(){

	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}

	test1();


	return 0;
}

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}

// ex01

// Constructors and destructors of each class must display specific messages.
// Implement a Brain class. It contains an array of 100 std::string called ideas.
// This way, Dog and Cat will have a private Brain* attribute.
// Upon construction, Dog and Cat will create their Brain using new Brain();
// Upon destruction, Dog and Cat will delete their Brain.
// 各クラスのコンストラクタとデストラクタは、特定のメッセージを表示する必要があります。
// Brain クラスを実装します。 これには、アイデアと呼ばれる 100 個の std::string の配列が含まれています。
// このように、Dog と Cat はプライベート Brain* 属性を持ちます。
// 構築時に、Dog と Cat は new Brain(); を使用して Brain を作成します。
// 破壊されると、犬と猫は脳を削除します。

// In your main function, create and fill an array of Animal objects. Half of it will be Dog objects and the other half will be Cat objects. At the end of your program
// execution, loop over this array and delete every Animal. You must delete directly dogs and cats as Animals. The appropriate destructors must be called in the expected order.
// メイン関数で、Animal オブジェクトの配列を作成して入力します。 半分になります
// は犬のオブジェクトで、残りの半分は猫のオブジェクトになります。 プログラムの最後に
// 実行後、この配列をループしてすべての Animal を削除します。 犬を直接削除する必要があります
// 動物としての猫。 適切なデストラクタは、予想される順序で呼び出す必要があります。

// Don’t forget to check for memory leaks.
// A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies are deep copies!
// Implement and turn in more tests than the ones given above.
// メモリ リークをチェックすることを忘れないでください。
// Dog または Cat のコピーは浅くしてはなりません。 したがって、コピーがディープ コピーであることをテストする必要があります。
// 上記以外のテストを実装して提出します。