#include<iostream>
using namespace std;
int main(void)
{
	int sum(0), num1(0), num2(0);
	for (cin >> num1 >> num2; num1 <= num2; num1++) {
		sum += num1;
	}
	cout << sum;
}
