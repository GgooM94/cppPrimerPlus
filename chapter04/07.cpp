#include<iostream>
#include<string>
using namespace std;
struct pizzaInf {
	string brand;
	double width;
	double kg;
};

int main(void)
{
	pizzaInf brand01;
	cout << "피자 회사 : ";
	getline(cin, brand01.brand);
	cout << "피자 지름 : ";
	cin >> brand01.width;
	cout << "피자의 중량 : ";
	cin >> brand01.kg;

	cout << "피자 회사 : " << brand01.brand << endl;
	cout << "피자 지름 : " << brand01.width << endl;
	cout << "피자의 중량 : " << brand01.kg << endl;
}
