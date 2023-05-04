#include "Dog.hpp"
#include "Cat.hpp"

int main(){

	{
		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST1 ", "subject", PINK198);
		myPutStr("=========", "===========", PINK198);

		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST1 ", "array", PINK201);
		myPutStr("=========", "===========", PINK201);
		int n = 10;
		Animal* array[n];
		myPutStr("=== ", "while {array[i] = new Dog();", PINK136);
		int i=0;
		while (i < n/2){
			array[i] = new Dog();
			i++;
		}
		myPutStr("=== ", "while {array[i] = new Cat();", PINK136);
		while (i < n){
			array[i] = new Cat();
			i++;
		}

		myPutStr("=== ", "while {delete array[i];", PINK136);
		i = 0;
		while(i < n){
			if (i == n/2)
				myPutStr("=== ", "i == n/2;", PINK136);
			delete array[i];
			i++;
		}

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST1 ", "deep cpy", PINK201);
		myPutStr("=========", "===========", PINK201);
		// コピーがディープ コピーであることをテストする必要があります。
		myPutStr("===","dog copy test" ,PINK136);
		myPutStr("===","Dog dog;" ,PINK136);
		Dog dog;
		myPutStr("===","Dog dog2;" ,PINK136);
		Dog dog2;
		myPutStr("===","dog.getType() " ,PINK136);
		myPutStr("", dog.getType() ,PINK198);
		myPutStr("===","dog2.getType() " ,PINK136);
		myPutStr("", dog2.getType() ,PINK198);
		myPutStr("===","dog2 = dog" ,PINK136);
		dog2 = dog;
		myPutStr("===","dog.setType(\"CureBlack\");" ,PINK136);
		dog.setType("CureBlack");
		myPutStr("===","dog.getType()" ,PINK136);
		myPutStr("", dog.getType() ,PINK198);
		myPutStr("===","dog2.getType()" ,PINK136);
		myPutStr("", dog2.getType() ,PINK198);
		
		myPutStr("===","cat copy test" ,PINK136);
		myPutStr("===","Cat cat" ,PINK136);
		Cat cat;
		myPutStr("===","Cat cat2" ,PINK136);
		Cat cat2;
		myPutStr("===","cat.getType()" ,PINK136);
		myPutStr("", cat.getType() ,PINK198);
		myPutStr("===","cat2.getType()" ,PINK136);
		myPutStr("", cat2.getType() ,PINK198);
		myPutStr("===","cat2 = cat" ,PINK136);
		cat2 = cat;
		myPutStr("===","cat.setType(\"CureWhite\");" ,PINK136);
		cat.setType("CureWhite");
		myPutStr("===","cat.getType()" ,PINK136);
		myPutStr("", cat.getType() ,PINK198);
		myPutStr("===","cat2.getType()" ,PINK136);
		myPutStr("", cat2.getType() ,PINK198);

// #define TEST_AB
#ifdef TEST_AB
		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST1 ", "Abstract", PINK201);
		myPutStr("=========", "===========", PINK201);
		myPutStr("===","const Animal* AA = new Animal();" ,PINK136);
		Animal AA;
#endif
		myPutStr("=== ", "end scope", PINK136);
	}



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

// In your main function, create and fill an array of Animal objects. Half of it will be Dog objects and the other half will be Cat objects. At the end of your program execution, loop over this array and delete every Animal. You must delete directly dogs and cats as Animals. The appropriate destructors must be called in the expected order.
// メイン関数で、Animal オブジェクトの配列を作成して入力します。 半分は犬のオブジェクト、残りの半分は猫のオブジェクトになります。 プログラムの実行の最後に、この配列をループしてすべての Animal を削除します。 動物として犬や猫を直接削除する必要があります。 適切なデストラクタは、予想される順序で呼び出す必要があります。

// Don’t forget to check for memory leaks.
// A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies are deep copies!
// Implement and turn in more tests than the ones given above.
// メモリ リークをチェックすることを忘れないでください。
// Dog または Cat のコピーは浅くしてはなりません。 したがって、コピーがディープ コピーであることをテストする必要があります。
// 上記以外のテストを実装して提出します。