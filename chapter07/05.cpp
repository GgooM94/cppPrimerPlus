#include<iostream>
using namespace std;

long double fac(int num) {
	if (num < 1) {
		return 1;
	}
	return num * fac(num - 1);
}

int main(void) {
	int num(0);
	cin >> num;
	cout << num << "! : " << fac(num);
}