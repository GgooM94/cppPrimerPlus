#include<iostream>
#include<cctype>
using namespace std;
const int Seasons = 4;
struct expenses
{
	double exp[Seasons];
};

const char* Sname[Seasons] = { "Spring", "Summer", "Fall","Winter" };
void fill(expenses *arr);
void show(expenses arr);

int main(void) {
	expenses arr;
	fill(&arr);
	show(arr);
}

void fill(expenses *arr) {
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << "에 소용되는 비용 : ";
		while (!(cin >> arr->exp[i])) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "잘못 입력했습니다, 비용을 입력하세요 : ";
		}
	}
}

void show(expenses arr) {
	double total = 0.0;
	cout << "\n계절별 비용$ \n";
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << " : $" << arr.exp[i] << endl;
		total += arr.exp[i];
	}
	cout << "총 비용 : $" << total << endl;
}