#include<iostream>
using namespace std;
const int strsize = 100;
const int memberSize = 3;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;	// 0 = fullname, 1 = title, 2 = bopname
};
void menu() {
	cout << "Benevolent Order of Programmers\n";
	cout << "a. 실명으로 열람\t b. 직함으로 열람\n";
	cout << "c. BOP 아이디로 열람\t d. 회원이 지정한 것으로 열람\n";
	cout << "q. 종료\n";
}

int main(void) {
	char ch;
	bop members[memberSize];
	members[0] = { "Wimp Macho","Wimp Title","Wimp Name", 0 };
	members[1] = { "Raki Rhodes","Raki Title","Raki Name", 1 };
	members[2] = { "Celia Laiter","Celia Title","Celia Name", 2 };

	menu();
	cin >> ch;

	while (ch != 'q') {
		for (int i = 0; i < memberSize; i++) {
			switch (ch)
			{
			case 'a':
				cout << members[i].fullname << endl;
				break;
			case 'b':
				cout << members[i].title << endl;
				break;
			case 'c':
				cout << members[i].bopname << endl;
				break;
			case 'd':

				switch (members[i].preference)
				{
				case 0:
					cout << members[i].fullname << endl;
					break;
				case 1:
					cout << members[i].title << endl;
					break;
				case 2:
					cout << members[i].bopname << endl;
					break;
				}
				break;

			default:
				cout << "a, b, c, d 중에서 하나를 선택하십시오. (끝내려면 q)\n";
				break;
			}
		}
		cin >> ch;
	}
}