#include<iostream>
using namespace std;



struct job
{
	char name[40];
	double salary;
	int floor;
};
template<typename T>
void Swap(T &a, T &b);
//명시적 특수화
template<>void Swap<job>(job &j1, job &j2);
void Show(job &j);
int main(void)
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "컴파일러가 생성한 int형 교환기를 사용하면\n";
	Swap(i, j);
	cout << "이제 i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan yaffee", 73000.60, 7 };
	job sideny = { "Sidney Taffee",78060.72, 9 };
	cout << "job 교환전 : \n";
	Show(sue);
	Show(sideny);
	Swap(sue, sideny);
	cout << "job 교환 후:\n";
	Show(sue);
	Show(sideny);
}

template<typename T>
void Swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template<>void Swap<job>(job &j1, job &j2) {
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}
void Show(job &j) {
	cout << j.name << ": (" << j.floor << "층에 거주)  $" << j.salary << endl;
}