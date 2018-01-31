#include<iostream>
#include<string>
using namespace std;

struct People
{
	string name;
	double money;
};

int main(void) {
	int cnt(0);
	bool flag = false;
	cin >> cnt;
	People *p = new People[cnt];

	for (int i = 0; i < cnt; i++) {
		cout << "고객의 이름과 기부금을 입력해주세요.\n";
		cin >> p[i].name >> p[i].money;
		if (p[i].money > 10000) {
			flag = true;
		}
	}
	if (flag == true && cnt >0) {
		cout << "고액 기부자\n";
		for (int i = 0; i < cnt; i++) {
			if (p[i].money >= 10000) {
				cout << p[i].name << "\t" << p[i].money << endl;
			}
		}
	}
	if (cnt > 0) {
		cout << "소액 기부자\n";
		for (int i = 0; i < cnt; i++) {
			if (p[i].money < 10000) {
				cout << p[i].name << "\t" << p[i].money << endl;
			}
		}
	}
	else {
		cout << "기부자가 없습니다.";
	}
}