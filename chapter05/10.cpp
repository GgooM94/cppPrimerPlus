#include<iostream>
using namespace std;
int main(void) {
	int count(0);
	cout << "출력할 행 수를 입력하십시오 : ";
	cin >> count;
	for (int i = 0; i < count; i++) {

		for (int j = count - i - 1; j >0; j--) {
			cout << '.';
		}
		for (int k = 0; k < i + 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
}