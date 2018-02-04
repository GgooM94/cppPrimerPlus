#include<iostream>
using namespace std;
#include<cstring>
struct stringy
{
	char *str;
	int ct;
};
void set(stringy &str, char *ch);
void show(const stringy &str, int n = 1);
void show(char *ch, int n = 1);

int main(void) {
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

}

void set(stringy &str, char *ch) {
	str.ct = strlen(ch);
	str.str = new char[str.ct + 1];
	str.str = ch;
}
void show(const stringy &str, int n) {
	for (int i = 0; i < n; i++) {
		cout << str.str << endl;
	}
}
void show(char *ch, int n) {
	for (int i = 0; i < n; i++) {
		cout << ch << endl;
	}
}
