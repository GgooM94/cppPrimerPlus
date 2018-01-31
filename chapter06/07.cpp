#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(void)
{
	int consonant(0);
	int vowel(0);
	int cnt(0);
	string ch;
	cin >> ch;
	while (true) {
		if (ch[0] == 'q' && ch[1] == NULL)
			break;

		if (isalpha(ch[0])) {
			tolower(ch[0]);
			switch (ch[0])
			{
			case 'a':case 'e':case 'i':case 'o':case 'u':
				vowel++;
				break;
			default:
				consonant++;
			}
		}
		else {
			cnt++;
		}
		cin >> ch;
	}
	cout << "모음으로 시작하는 단어 수 : " << vowel << endl;
	cout << "자음으로 시작하는 단어 수 : " << consonant << endl;
	cout << "기타 : " << cnt;
}