#include<iostream>
using namespace std;
int main(void)
{
	const int size = 12;
	char *month[size] = {
		"January","February","March",
		"Apil","May","June",
		"July","August","September",
		"October","November","December"
	};

	int *count = new int[size];
	int sum(0);
	for (int i = 0; i < 12; i++) {
		cout << month[i] << " 판매량 : ";
		cin >> count[i];
		sum += count[i];
	}
	cout << "연간 총 판매량 : " << sum;
}
