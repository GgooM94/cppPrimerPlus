#include<iostream>
#include"sales_04.h"

int main(void) {
	const int N(2);
	double ar[N] = { 500, 600 };

	SALES::Sales A;
	SALES::setSales(A, ar, N);
	std::cout << "비대화식 버전 :\n";
	SALES::showSales(A);
	std::cout << std::endl;

	SALES::Sales B;
	SALES::setSales(B);
	std::cout << "대화식 버전 :\n";
	SALES::showSales(B);
	std::cout << std::endl;
}