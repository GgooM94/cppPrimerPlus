#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string fName;
	string lName;
	string result;

	cout << "영문 퍼스트 네임 : ";
	getline(cin, fName);
	cout << "영문 라스트 네임 : ";
	getline(cin, lName);

	result = lName + ", " + fName;
	cout << result;

}