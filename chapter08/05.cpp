#include<iostream>
using namespace std;

const int SIZE = 5;

template<typename T>
T max(T arr[]) {
	T tempMax = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (tempMax < arr[i])
			tempMax = arr[i];
	}
	return tempMax;
}

int main(void) {
	int arrInt[SIZE];
	double arrDouble[SIZE];

	cout << "Int형 숫자를 " << SIZE << " 개수를 입력해주세요.\n";
	for (int i = 0; i < SIZE; i++) {
		cin >> arrInt[i];
	}
	cout << "Int MAX : " << max(arrInt);

	cout << "Double형 숫자를 " << SIZE << " 개수를 입력해주세요.\n";
	for (int i = 0; i < SIZE; i++) {
		cin >> arrDouble[i];
	}
	cout << "Double MAX : " << max(arrDouble);

}