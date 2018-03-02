#include<iostream>
#include<string>
using namespace std;
bool palindrome(string &st);
int main(void) {
	string a;
	cin >> a;
	while (palindrome(a)) {
		cout << a << ": 회문입니다.\n";
		cin >> a;
	}

}
bool palindrome(string &st) {
	int start = 0;
	int finish = st.length()-1;
	for (; start < finish; start++, finish--) {
		if (st[start] != st[finish])
			return false;
	}
	return true;
}