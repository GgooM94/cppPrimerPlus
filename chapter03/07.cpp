#include<iostream>
using namespace std;
int main(void)
{
	double gal(0), mile(0), km(0), l(0);
	const double kmTomile(0.621371), lTogal(0.264172);

	cout << "주행한 거리(km) : ";
	cin >> km;
	cout << "소모한 휘발류(l) : ";
	cin >> l;
	cout << "유럽 기준 100km당 리터 수 : " << km / l << endl;

	mile = km * kmTomile;
	gal = l *lTogal;
	cout << "미국 기준 갤런당 마일 수: " << mile / gal;

}
