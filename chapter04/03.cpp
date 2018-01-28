#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	char fName[100];
	char lName[100];
	char result[100];

	cout << "영문 퍼스트 네임 : ";
	cin.getline(fName, sizeof(fName));
	cout << "영문 라스트 네임 : ";
	cin.getline(lName, sizeof(lName));

	strcpy_s(result, lName);
	strcat_s(result, ", ");
	strcat_s(result, fName);
	cout << result;

}

