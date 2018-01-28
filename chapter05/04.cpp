#include<iostream>
using namespace std;
int main(void) {
	double customerA(100000);
	double customerB(100000);
	double customerAin = customerA * 0.1;
	int year(0);

	do {
		year++;
		customerA += customerAin;
		customerB = customerB * 1.05;

	} while (customerA > customerB);
	cout << "고객B가 고객A의 투자가치를 초과하는 년도 : " << year << endl;
	cout << "고객 A 투자가치 : " << customerA << endl;
	cout << "고객 B 투자가치 : " << customerB << endl;
}
