#include<iostream>
using namespace std;
const int MAX = 5;

double *fill_array(double ar[], int limit);
void show_array(const double ar[], double *n);
void revalue(double r, double ar[], double *n);

int main(void) {
	double properties[MAX];
	double *size = fill_array(properties, MAX);
	show_array(properties, size);
	if (*(size - 1) >0) {
		cout << "재평가율을 입력하십시오 : ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "잘못 입력했습니다, 수치를 입력하세요 : ";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}

	cout << "프로그램을 종료합니다.\n";
	cin.get();
	cin.get();
}

double *fill_array(double ar[], int limit) {
	double temp;
	int i;
	for (i = 0; i < limit; i++) {
		cout << (i + 1) << "번 부동산의 가격 : $ ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "입력 불량, 입력 과정을 끝내겠습니다. \n";
			break;
		}
		else if (temp < 0) {
			break;
		}
		ar[i] = temp;
	}
	return &ar[i];
}

void show_array(const double ar[], double *n) {
	for (int i = 0; &ar[i] != n; i++) {
		cout << (i + 1) << "번 부동산 : $ ";
		cout << ar[i] << endl;
	}
}

void revalue(double r, double ar[], double *n) {
	for (int i = 0; &ar[i] != n; i++)
	{
		ar[i] *= r;
	}
}