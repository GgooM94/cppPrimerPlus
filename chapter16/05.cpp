#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
const int MAX = 6;
template<class T>
int reduce(T ar[], int n);
int main(void) {

	long ar[MAX] = { 10,20,15,16,15,15 };
	string sr[MAX] = { "red","choi","bo","gyu","red","song" };

	cout << "단축된 배열 크기 : "<<reduce(ar, MAX)<<endl;
	cout << "단축된 배열 크기 : " << reduce(sr, MAX) << endl;
}
template<class T>
int reduce(T sr[], int n) {
	ostream_iterator<T, char>out(cout, " ");
	set<T>temp(sr, sr + n);
	return temp.size();
}


