#include<iostream>
#include<string>
using namespace std;
int cnt(0);
void print(string std) {
	cout << std << endl;;
	cnt++;
}
void print(string std, int n) {
	for (int i = 0; i < cnt; i++) {
		cout << std << endl;
	}
}
int main(void) {
	string std;
	int i(1);
	cout << "문자열 입력.\n";
	cin >> std;
	print(std);
	print(std);
	print(std);
	print(std);
	print(std);
	print(std, i);
}