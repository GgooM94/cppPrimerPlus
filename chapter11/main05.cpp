#include<iostream>
using std::cout;
#include"stonewt05.h"

int main(void) {
	Stonewt pavarotti = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21);
	int n;
	cout << "1 : 스톤형식 출력\n2 : 정수 파운드 형식 출력\n";
	while (std::cin >> n) {
		if (!(n == 1 || n == 2))
			break;

		pavarotti.setState(n);
		cout << pavarotti;
		cout << pavarotti + wolfe;
		cout << pavarotti - wolfe;
		cout << pavarotti * 5;



		cout << "1 : 스톤형식 출력\n2 : 정수 파운드 형식 출력\n";
	}
}
