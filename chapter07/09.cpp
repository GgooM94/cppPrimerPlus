#include<iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n)
{

	int i(0);
	for (i = 0; i < n; i++) {
		cout << "이름 : ";
		cin >> pa[i].fullname;
		cout << "취미 : ";
		cin >> pa[i].hobby;
	}
	return i;
};

void display1(student st) {
	cout << "이름 : " << st.fullname << endl;
	cout << "취미 : " << st.hobby << endl;
}
void display2(const student *pa) {
	cout << "이름 : " << pa->fullname << endl;
	cout << "취미 : " << pa->hobby << endl;
}
void display3(const student pa[], int size) {
	for (int i = 0; i < size; i++) {
		cout << i + 1 << "이름 : " << pa[i].fullname << endl;
		cout << i + 1 << "취미 : " << pa[i].hobby << endl;
	}
}

int main(void) {
	cout << "학급의 학생 수를 입력하십시오 : ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n') {
		continue;
	}

	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	cout << "\nDisplay1 출력 결과\n";
	for (int k = 0; k < entered; k++) { display1(ptr_stu[k]); }

	cout << "\nDisplay2 출력 결과\n";
	for (int k = 0; k < entered; k++) { display2(&ptr_stu[k]); }

	cout << "\nDisplay3 출력 결과\n";
	display3(ptr_stu, entered);

	cout << "프로그램을 종료합니다.\n";
}