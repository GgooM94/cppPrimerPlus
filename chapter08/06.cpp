#include<iostream>
#include<string>
using namespace std;

template<typename T>
T maxn(T arr[], int n) {
	T tempMax = arr[0];
	for (int i = 1; i < n; i++) {
		if (tempMax < arr[i])
			tempMax = arr[i];
	}
	return tempMax;
}
template<> string maxn<string>(string arrChar[], int n) {
	int len(0), index(0);
	int max = arrChar[0].length();
	for (int i = 1; i < n; i++) {
		if (max < arrChar[i].length()) {
			max = arrChar[i].length();
			index = i;
		}
	}
	return arrChar[index];
}


int main(void) {
	int arrInt[] = { 10,20,40,60,70,50 };
	double arrDouble[] = { 10.5, 20.6, 30.7, 80.4 };
	string arrChar[5] = { "aadaa","bbbbbb","ccc","dd","eeeeeeee" };
	cout << "Int MAx : " << maxn(arrInt, size(arrInt)) << endl;
	cout << "Double MAx : " << maxn(arrDouble, size(arrDouble)) << endl;
	cout << "Char Max : " << maxn(arrChar, size(arrChar)) << endl;
}