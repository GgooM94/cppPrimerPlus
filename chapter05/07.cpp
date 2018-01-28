#include<iostream>
#include<string>
using namespace std;
struct car {
	string brand;
	int year;
};

int main(void) {
	int repeat(0);
	cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
	cin >> repeat;
	car *myCar = new car[repeat];

	for (int i = 0; i < repeat; i++) {
		cin.get();
		cout << "자동차 #" << i + 1 << ":\n";
		cout << "제작업체 : ";
		getline(cin, myCar[i].brand);
		cout << "제작년도 : ";
		cin >> myCar[i].year;
	}
	cout << "\n현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다.\n";
	for (int i = 0; i < repeat; i++) {
		cout << myCar[i].year << "년형 " << myCar[i].brand << endl;
	}
}