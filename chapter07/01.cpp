#include<iostream>
using namespace std;
double avg(int num1, int num2) {
	return 2.0 * num1 * num2 / (num1 + num2);
}
int main(void) {
	int num1, num2;
	cout << "조화평균을 구하는 프로그램입니다. (종료 : 0)\n";
	cin >> num1 >> num2;
	while (num1 != 0 && num2 != 0)
	{
		cout << avg(num1, num2) << endl;
		cin >> num1 >> num2;
	}
}