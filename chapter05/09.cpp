#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string word;

	int cnt(0);
	while (cin >> word, word != "done") {
		cnt++;
	}
	cout << "총 " << cnt << "단어가 입력되었습니다.";
}