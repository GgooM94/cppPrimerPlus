#include<iostream>
using namespace std;
void time(int &hour, int &min) {
	cout << "시각: " << hour << " : " << min;
}
void main() {
	int hour, min;
	cout << "시간 값을 입력하시오 : ";
	cin >> hour;
	cout << "분 값을 입력하시오 : ";
	cin >> min;
	time(hour, min);
}
