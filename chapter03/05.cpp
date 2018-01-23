#include<iostream>
using namespace std;
int main(void) {
	unsigned long glcountry(0), country(0);
	cout << "세계 인구수를 입력하시오 : ";
	cin >> glcountry;
	cout << "미국의 인구수를 입력하시오 : ";
	cin >> country;

	double result = double(country) / glcountry;

	cout << "세계 인구수에서 미국이 차지하는 비중은 " << result << "%이다.";
}
