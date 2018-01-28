#include<iostream>
#include<string>
using namespace std;
struct inf {
	string fName;
	string lName;
	char grade;
	int year;
};
int main(void) {
	inf student;
	cout << "영문 퍼스트 네임 : ";
	getline(cin, student.fName);
	cout << "영문 라스트 네임 : ";
	getline(cin, student.lName);
	cout << "학생이 원하는 학점 : ";
	cin >> student.grade;
	cout << "나이 : ";
	cin >> student.year;

	cout << "성명 : " << student.lName << ", " << student.fName << endl;
	cout << "학점 : " << char(student.grade + 1) << endl;
	cout << "나이 : " << student.year << endl;
}
