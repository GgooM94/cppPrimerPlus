#include<iostream>
using namespace std;
int main(void)
{
	const int size = 12;
	char *month[size] = {
		"January","February","March",
		"Apil","May","June",
		"July","August","September",
		"October","November","December"
	};

	int cnt[3][size];
	int sum(0);
	for (int k = 0; k < 3; k++) {
		cout << "201" << k << "년 월간 판매량을 입력해주세요.\n";
		for (int i = 0; i < size; i++) {
			cout << month[i] << " 판매량 : ";
			cin >> cnt[k][i];
			sum += cnt[k][i];
		}
		cout << "--------------------------\n\n";
	}
	cout << "3년 총 판매량 : " << sum;
}
