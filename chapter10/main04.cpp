#include<iostream>
#include"namesp04.h"

int main(void) {
	double ar[3] = { 100,200,300 };
	SALES A(ar, 3);
	A.showSales();
	std::cout << std::endl;
	SALES B;
	B.showSales();
}