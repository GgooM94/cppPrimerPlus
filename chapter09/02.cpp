#include<iostream>
#include<string>
void strcount(const std::string str);

int main(void) {
	using namespace std;
	string input;

	while (true) {
		cout << "영문으로 한 행을 입력하십시오.\n";
		getline(cin, input);
		if (input == "") {
			cout << "프로그램을 종료합니다.\n";
			break;
		}
		strcount(input);
	}
}
void strcount(const std::string str) {
	using namespace std;
	static int tot = 0;
	int count = 0;

	cout << "\"" << str << "\"에는 ";
	count = size(str);
	tot += count;
	cout << count << "개의 문자가 있습니다.\n";
	cout << "지금까지 총 " << tot << "개의 문자를 입력하셨습니다.\n\n";

}