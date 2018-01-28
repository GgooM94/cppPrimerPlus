#include<iostream>
using namespace std;
int main(void)
{
	int sum(0), num(0);

	do {
		sum += num;
		cin >> num;
	} while (num != 0);
	cout << sum;
}
