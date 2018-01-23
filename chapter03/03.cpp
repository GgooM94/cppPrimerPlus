#include<iostream>
using namespace std;
int main(void)
{
	long double hour, min, sec, result;
	const long double minTo(0.01666666666666666);
	const long double secTo(0.00277777777777777);

	cout << "위도를 도, 분, 초 단위로 입력하시오.\n";
	cout << "먼저, 도각을 입력하시오 : ";
	cin >> hour;
	result = hour;
	cout << "다음에, 분각을 입력하시오 : ";
	cin >> min;
	result += min * minTo;
	cout << "끝으로, 초각을 입력하시오 :";
	cin >> sec;
	result += sec * secTo;

	cout << hour << "도, " << min << "분, " << sec << "초, =" << result << "도";

}
