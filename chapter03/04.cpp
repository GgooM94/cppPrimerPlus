#include<iostream>
using namespace std;
int main(void)
{
	long inputSec(0);
	int day(0), hour(0), min(0), sec(0);
	const int secToday(86400), secTohour(3600), secTomin(60);


	cout << "초 수를 입력하시오 : ";
	cin >> inputSec;

	day = inputSec / secToday;
	hour = inputSec % secToday / secTohour;
	min = inputSec%secTohour / secTomin;
	sec = inputSec%secTomin;

	cout << inputSec << "초 = " << day << "일, " << hour << "시간, " << min << "분, "
		<< sec << "초";

}
