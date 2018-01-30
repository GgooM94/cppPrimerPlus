#include<iostream>
using namespace std;
void menu() {
	cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n";
	cout << "c) camera \tp) pianist\n";
	cout << "t) tree \tg) game\n";
}
int main(void) {
	menu();
	char ch;
	cin >> ch;
	while ('q' != ch) {
		switch (ch)
		{
		case 'c':
			cout << "camera 선택\n";
			break;

		case 'p':
			cout << "pianist 선택\n";
			break;

		case 't':
			cout << "tree 선택\n";
			break;

		case 'g':
			cout << "game 선택\n";
			break;

		default:
			cout << "c, p, t, g중에서 하나를 선택하십시오. (끝내려면 q) :";
		}
		cin >> ch;
	}
}