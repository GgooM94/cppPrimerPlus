#include<iostream>
#include<cctype>
#include"stack04.h"

int main(void)
{
	using namespace std;
	unsigned long po;
	int size;
	cout << "스택 사이즈 : ";
	cin >> size;

	cout << "\nStack st(size) " << size << "회 POP\n";
	Stack st(size);
	for (int i = 0; i < size; i++) {
		po = i;
		if (st.isfull())
			cout << "스택이 가득 차 있습니다.\n";
		else {
			st.push(po);
			cout << "# " << po << " PUSH.\n";
		}
		
	}
	cout << "\nStack test(st) " << size << "회 POP\n";
	Stack test(st);
	Stack testA;
	testA = test;
	for (int i = size-1; i >= 0; i--) {
		po = i;
		if (test.isempty())
			cout << "스택이 비어 있습니다.\n";
		else {
			test.pop(po);
			cout << "# " << po << " POP.\n";
		}
	}
	cout << "\nStack testA = test " << size << "회 POP\n";
	for (int i = size-1; i >= 0; i--) {
		po = i;
		if (testA.isempty())
			cout << "스택이 비어 있습니다.\n";
		else {
			testA.pop(po);
			cout << "# " << po << " POP.\n";
		}
	}
	cout << "\nStack st "<<size<<"회 POP\n";
	for (int i = size-1; i >=0; i--) {
		po = i;
		if (st.isempty())
			cout << "스택이 비어 있습니다.\n";
		else {
			st.pop(po);
			cout << "# " << po << " POP.\n";
		}
	}
}