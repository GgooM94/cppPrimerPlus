#include<iostream>
using namespace std;
int main(void)
{
	const double ftToin(12);
	const double inTom(0.0254);
	const double lbTokg(0.453592);

	double ft, lb, m, kg, bmi;
	cout << "당신의 키를 피트단위로 입력 : ";
	cin >> ft;
	cout << "당신의 체중을 파운드 단위로 입력 : ";
	cin >> lb;

	m = ft * ftToin * inTom;
	kg = lb * lbTokg;
	bmi = kg / (m*m);
	cout << "당신의 bmi : " << bmi;

}
