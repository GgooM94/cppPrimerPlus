#include<iostream>
using namespace std;
void print() {
	cout << "5000 트바프 까지는 : 0%\n";
	cout << "그 다음 10000 트바프 까지는 : 10%\n";
	cout << "또 그 다음20000 트바프 까지는 : 15%\n";
	cout << "35000 트바프 이상에 대해서는 : 20%\n";
}
int main(void) {
	print();

	int money(0), index(0);
	double result(0);
	cin >> money;
	while (money > 0) {
		if (money >= 35000) { index = 0; }
		else if (money > 15000) { index = 1; }
		else if (money > 5000) { index = 2; }
		else { index = 3; }
		switch (index)
		{
		case 0:
			result += (money - 35000) * 0.20;
			money -= (money - 35000);

		case 1:
			result += (money - 15000) * 0.15;
			money -= (money - 15000);

		case 2:
			result += (money - 5000) * 0.10;
			money -= (money - 5000);
		case 3:
			result += 0;
		}
		cout << result;
		cin >> money;
	}
}