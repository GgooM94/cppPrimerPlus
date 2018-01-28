#include<iostream>
using namespace std;
struct inf {
	char fName[100];
	char lName[100];
	char grade;
	int year;
};
int main(void) {
	inf student;
	cout << "영문 퍼스트 네임 : ";
	cin.getline(student.fName, sizeof(student.fName));
	cout << "영문 라스트 네임 : ";
	cin.getline(student.lName, sizeof(student.lName));
	cout << "학생이 원하는 학점 : ";
	cin >> student.grade;
	cout << "나이 : ";
	cin >> student.year;

	cout << "성명 : " << student.lName << ", " << student.fName << endl;
	cout << "학점 : " << char(student.grade + 1) << endl;
	cout << "나이 : " << student.year << endl;
}
