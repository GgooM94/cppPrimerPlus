#include<iostream>
#include"cow01.h"

int main(void) {

	Cow TestA;
	Cow TestB("BoGyu","PUBG", 70);
	Cow TestC(TestB);
	Cow TestD;
	TestD = TestC;

	TestA.ShowCow();
	TestB.ShowCow();
	TestC.ShowCow();
	TestD.ShowCow();
}