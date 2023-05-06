// #include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

// #define TEST_EX04
int main(){
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
#ifdef TEST_EX04
	{
		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST_EX02 ", "Brain ", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== ", "IMateriaSource* src = new MateriaSource();", PINK190);
		IMateriaSource* src = new MateriaSource();
		myPutStr("=== ", "src->learnMateria(new Ice());", PINK190);
		src->learnMateria(new Ice());
		myPutStr("=== ", "src->learnMateria(new Cure());", PINK190);
		src->learnMateria(new Cure());

		myPutStr("=== ", "ICharacter* me = new Character(\"me\");", PINK190);
		ICharacter* me = new Character("me");
		myPutStr("=== ", "AMateria* tmp;", PINK190);
		AMateria* tmp;

		myPutStr("=== ", "tmp = src->createMateria(\"ice\");", PINK190);
		tmp = src->createMateria("ice");
		myPutStr("=== ", "me->equip(tmp);", PINK190);
		me->equip(tmp);
		myPutStr("=== ", "tmp = src->createMateria(\"cure\");", PINK190);
		tmp = src->createMateria("cure");
		myPutStr("=== ", "me->equip(tmp);", PINK190);
		me->equip(tmp);

		myPutStr("=== ", "ICharacter* bob = new Character(\"bob\");", PINK190);
		ICharacter* bob = new Character("bob");
		myPutStr("=== ", "me->use(0, *bob);", PINK190);
		me->use(0, *bob);
		myPutStr("=== ", "me->use(0, *bob);", PINK190);
		me->use(1, *bob);
		myPutStr("=== ", "delete", PINK190);
		delete bob;
		delete me;
		delete src;
	}
#endif
	return 0;
}

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}

// case subject
// $> clang++ -W -Wall -Werror *.cpp
// $> ./a.out | cat -e
// * shoots an ice bolt at bob *$
// * heals bob's wounds *$

// ex03

// Interfaces don’t exist in C++98 (not even in C++20). However, pure abstract classes are commonly called interfaces. Thus, in this last exercise, let’s try to implement interfaces in order to make sure you got this module.

// インターフェイスは C++98 には存在しません (C++20 にも存在しません)。 ただし、純粋な抽象クラスは一般にインターフェイスと呼ばれます。 したがって、この最後の演習では、このモジュールを確実に取得するためにインターフェイスを実装してみましょう。

// Complete the definition of the following AMateria class and implement the necessary member functions.

// 次の AMateria クラスの定義を完了し、必要なメンバー関数を実装します。

// Implement the Materias concrete classes Ice and Cure. Use their name in lowercase ("ice" for Ice, "cure" for Cure) to set their types. Of course, their member function clone() will return a new instance of the same type (i.e., if you clone an Ice Materia, you will get a new Ice Materia).

// マテリアスの具象クラス Ice と Cure を実装します。 小文字の名前 (Ice は「ice」、Cure は「cure」) を使用して、タイプを設定します。 もちろん、それらのメンバー関数 clone() は同じタイプの新しいインスタンスを返します (つまり、Ice Materia を複製すると、新しい Ice Materia を取得します)。

// The use(ICharacter&) member function will display:
// • Ice: "* shoots an ice bolt at <name> *"
// • Cure: "* heals <name>’s wounds *"
// <name> is the name of the Character passed as parameter. Don’t print the angle brackets (< and >).

// use(ICharacter&) メンバー関数は次のように表示されます。
// • 氷: 「* <名前> に氷の矢を放つ *」
// •治療：「* <name>の傷を癒す*」
// <name> は、パラメーターとして渡されるキャラクターの名前です。 山かっこ (< および >) を印刷しないでください。

// While assigning a Materia to another, copying the type doesn’t make sense.

// マテリアを別のマテリアに割り当てる場合、タイプをコピーしても意味がありません。

// Write the concrete class Character which will implement the following interface:

// 次のインターフェイスを実装する具象クラス Character を記述します。

// The Character possesses an inventory of 4 slots, which means 4 Materias at most.
// The inventory is empty at construction. They equip the Materias in the first empty slot they find. This means, in this order: from slot 0 to slot 3. In case they try to add a Materia to a full inventory, or use/unequip an unexisting Materia, don’t do anything (but still, bugs are forbidden). The unequip() member function must NOT delete the Materia!

// キャラクターは 4 つのスロットのインベントリを持っています。これは、最大 4 つのマテリアを意味します。
// インベントリは構築時に空です。 最初に見つけた空きスロットにマテリアを装備します。 これは、スロット 0 からスロット 3 の順番であるということです。完全なインベントリにマテリアを追加しようとした場合、または存在しないマテリアを使用/装備解除しようとした場合は、何もしないでください (ただし、バグは禁止されています)。 unequip() メンバー関数はマテリアを削除してはなりません!

// Handle the Materias your character left on the floor as you like.
// Save the addresses before calling unequip(), or anything else, but don’t forget that you have to avoid memory leaks.

// キャラクターが床に置いたマテリアを好きなように処理します。
// unequip() などを呼び出す前にアドレスを保存しますが、メモリ リークを避ける必要があることを忘れないでください。

// The use(int, ICharacter&) member function will have to use the Materia at the slot[idx], and pass the target parameter to the AMateria::use function.

// use(int, ICharacter&) メンバー関数は、slot[idx] でマテリアを使用し、ターゲット パラメータを AMateria::use 関数に渡す必要があります。

// Your character’s inventory will be able to support any type of AMateria.

// キャラクターの所持品は、あらゆる種類の A マテリアをサポートできます

// Your Character must have a constructor taking its name as a parameter. Any copy (using copy constructor or copy assignment operator) of a Character must be deep.
// During copy, the Materias of a Character must be deleted before the new ones are added to their inventory. Of course, the Materias must be deleted when a Character is destroyed.

// キャラクターには、その名前をパラメーターとして取るコンストラクターが必要です。 Character のすべてのコピー (コピー コンストラクターまたはコピー代入演算子を使用) は、深い必要があります。
// コピー中、新しいマテリアがインベントリに追加される前に、キャラクターのマテリアを削除する必要があります。 もちろん、キャラクターが破壊された場合、マテリアは削除されなければなりません。

// Write the concrete class MateriaSource which will implement the following interface:

// 次のインターフェースを実装する具象クラス MateriaSource を記述します。

// • learnMateria(AMateria*)
// Copies the Materia passed as a parameter and store it in memory so it can be cloned later. Like the Character, the MateriaSource can know at most 4 Materias. They are not necessarily unique.

// パラメータとして渡されたマテリアをコピーしてメモリに保存し、後で複製できるようにします。 キャラクターと同様に、マテリアソースは最大 4 つのマテリアを知ることができます。 それらは必ずしも一意ではありません。

// • createMateria(std::string const &)
// Returns a new Materia. The latter is a copy of the Materia previously learned by the MateriaSource whose type equals the one passed as parameter. Returns 0 if the type is unknown.

// 新しいマテリアを返します。 後者は、以前に MateriaSource によって学習されたマテリアのコピーであり、そのタイプはパラメータとして渡されたものと同じです。 タイプが不明な場合は 0 を返します。

// In a nutshell, your MateriaSource must be able to learn "templates" of Materias to create them when needed. Then, you will be able to generate a new Materia using just a string that identifies its type.

// 簡単に言うと、マテリアソースはマテリアの「テンプレート」を学習して、必要なときに作成できる必要があります。 次に、そのタイプを識別する文字列のみを使用して、新しいマテリアを生成できるようになります。