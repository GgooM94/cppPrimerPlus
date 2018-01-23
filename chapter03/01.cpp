#include<iostream>
using namespace std;
int main(void)
{
	const float m = 0.01;
	float cm(0);
	cout << "키를 cm 단위로 입력해주세요 : ";
	cout << "_____";
	cout << "\b\b\b\b\b";
	cin >> cm;
	cout << cm *m << "m 입니다.\n";
	cout << cm << "입니다";
}

