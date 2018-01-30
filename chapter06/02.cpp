#include<iostream>
#include<array>
#include<cctype>
const int MAX = 10;
using namespace std;
int main(void)
{
	array<double, MAX>arr;
	double num(0);
	int i(0), cnt(0);
	double sum(0), avg(0);
	cout << "기부금 입력\n";
	while (i < MAX &&cin >> num) {
		arr[i++] = num;
		sum += num;
	}
	avg = sum / i;
	for (int k = 0; k < i; k++) {
		if (avg < arr[k])
			cnt++;
	}
	cout << "기부금 평균 : " << avg << endl;
	cout << "평균보다 큰 기부금 개수 : " << cnt;
}
