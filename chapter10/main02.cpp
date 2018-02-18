#include<iostream>
#include"Person02.h"

int main() {
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	one.formalShow();
	std::cout << std::endl;

	two.Show();
	two.formalShow();
	std::cout << std::endl;

	three.Show();
	three.formalShow();
	std::cout << std::endl;

}