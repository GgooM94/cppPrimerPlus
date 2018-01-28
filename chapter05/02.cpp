#include<iostream>
#include<array>
using namespace std;
int main(void) {

	array<long double, 101> arr{ 1, };
	for (int i = 1; i < 101; i++) {
		arr[i] = arr[i - 1] * i;
	}
	cout << "100! = " << arr[100];
}


