#include<iostream>
using namespace std;
struct CandyBar
{
	char brand[40];
	double kg;
	int kcal;
};
void initData(CandyBar &can, char *brand = "Millennium Munch", double kg = 2.85, int kcal = 350);
void showData(CandyBar &can);

int main(void) {
	CandyBar can;
	initData(can, "초콜릿", 100.5, 100);
	showData(can);

	initData(can);
	showData(can);
}

void initData(CandyBar &can, char *brand, double kg, int kcal) {
	strcpy_s(can.brand, brand);
	can.kg = kg;
	can.kcal = kcal;
}

void showData(CandyBar &can) {
	cout << "Candy Brand : " << can.brand << endl;
	cout << "캔디바 중량 :" << can.kg << endl;
	cout << "캔디바 Kcal :" << can.kcal << endl;
}