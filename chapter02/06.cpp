#include<iostream>
using namespace std;
double tranFunc(double &dis){
	return dis*63240;
}
void main(){
	cout <<"광년수를 입력하고 Enter 키를 누르십시오 : ";
	double dis;
	cin >>dis;
	cout <<dis<<"광년은"<<tranFunc(dis)<<"천문 단위입니다.";
}
