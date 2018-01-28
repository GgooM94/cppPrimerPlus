#include<iostream>
#include<array>
using namespace std;
int main(void) {

	array<double, 3> result;
	cout << "40m 달리기 결과를 3번 입력 :";
	cin >> result[0] >> result[1] >> result[2];
	double avg = (result[0] + result[1] + result[2]) / size(result);

	cout << "array : " << size(result) << endl;
	cout << "평균 : " << avg;
}
