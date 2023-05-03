#include "Animal.hpp"
#include "Test.hpp"


#define MY_TEST1

void test(){
	{
		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST1 ", "", PINK198);
		myPutStr("=========", "===========", PINK198);

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST1 ", "", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== ", "Animal aA;", PINK136);
		Animal aA;
		myPutStr("=== ", "Animal bA(aA);;", PINK136);
		Animal bA(aA);
		myPutStr("=== ", "Animal cA;", PINK136);
		Animal cA;
		myPutStr("=== ", "cA = bA;", PINK136);
		cA = bA;

		myPutStr("=== ", "end scope", PINK136);
	}
}

int main(){

	test();
	// Animal a;
	// Animal b(a);
	// Animal c;
	// c = b;

	return 0;
}

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}