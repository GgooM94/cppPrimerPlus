#include<iostream>
using namespace std;
const int MAX(10);
int main(void) {
	int score[MAX];
	int avg(0), tot(0);

	cout << "골프 스코어를 입력해주세요. (최대 10개)\n";

	int i(0);
	while (i < MAX) {
		cin >> score[i];
		if (score[i] < 0) { break; }
		tot += score[i];
		i++;
	}

	for (int k = 0; k < i; k++) {
		cout << score[k] << "\t";
	}
	avg = tot / i;
	cout << "평균 : " << avg;
}