#include<iostream>
#include<cstring>
using namespace std;
int main(void) {
	char word[100];
	int cnt(0);

	while (strcmp(word, "done") != 0) {
		cin >> word;
		cnt++;
	}
	cout << "총 " << cnt - 1 << "단어가 입력되었습니다.";
}
