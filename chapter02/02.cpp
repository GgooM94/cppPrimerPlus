#include<iostream>
using namespace std;
void main() {
	cout << "마일 -> 킬로미터 변환입니다." << endl;
	cout << "변환할 마일 : ";
	float inputData;
	cin >> inputData;
	float result = inputData * 1.60934;
	cout << inputData << " 마일은 : " << result << "킬로미터 입니다.";
}
