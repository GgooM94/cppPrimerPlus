#include<iostream>
#include<cctype>
using namespace std;
int main(void) {
	char ch;
	string word;
	int index(0);
	cin.get(ch);
	while (ch != '@') {
		if (islower(ch)) {
			ch = toupper(ch);
		}
		else if (isupper(ch)) {
			ch = tolower(ch);
		}
		cout << ch;
		cin.get(ch);
	}
}