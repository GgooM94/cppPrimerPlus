#include<iostream>
#include<string>
#include<cctype>

using namespace std;
bool palindrome(string &st);
int main(void) {
	string a;
	getline(cin, a);
	while (palindrome(a)) {
		cout << a << ": 회문입니다.\n";
		getline(cin, a);
	}

}
bool palindrome(string &st) {
	string temp ="";
	for (int i = 0; i < st.length(); i++) {
		if (isalpha(st[i]))
			temp += tolower(st[i]);
	}
	int start = 0;
	int finish = temp.length()-1;
	for (; start < finish; start++, finish--) {
		if (temp[start] != temp[finish])
			return false;
	}
	return true;
}