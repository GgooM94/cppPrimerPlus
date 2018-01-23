#include<iostream>
using namespace std;
int main(void)
{
	double gal(0), mile(0), km(0), l(0);
	const double mileTokm(1.609344), galTol(3.785412);

	cout << "주행한 거리(mile) : ";
	cin >> mile;
	cout << "소모한 휘발류(gal) : ";
	cin >> gal;
	cout << "갤런당 마일 수 : " << mile / gal << endl;

	km = mile*mileTokm;
	l = gal*galTol;

	cout << "유럽 기준 100km당 리터 수 : " << km / 100 / l;

}
