#include<iostream>
using namespace std;
float tranFunc(const float& num){
	
	return num*1.8 +32.0f;
}

void main(){
	cout<<"섭씨 온도를 입력하고 Enter 키를 누르십시오 : ";
	float num;
	cin >> num;
	cout <<"섭씨" <<num<<"도는 화씨로 "<<tranFunc(num)<<"도입니다.";
}
