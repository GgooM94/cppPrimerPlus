#include<iostream>
using namespace std;
long double probability(unsigned numbers, unsigned picks);
int main(void)
{
	double tot, tot1, choices, choices1;
	long double res;
	cout << "그랑프리 승률 계산기 입니다.\n";
	cout << "첫 번째 게임 범위와 뽑는 수, 두 번째 게임 범위와 뽑는 수를 입력해주세요. :\n";
	while ((cin >> tot >> choices >> tot1 >> choices1) && choices <= tot) {
		cout << "당신이 이길 확률은 ";
		res = probability(tot, choices);
		res = res * probability(tot1, choices1);
		cout << res;
		cout << "번 중에서 한 번입니다.\n";
		cout << " 다시 두 수를 입력하십시오. (끝내려면 q를 입력) :";
	}
	cout << "프로그램을 종료합니다\n";
}
long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	return result;
}