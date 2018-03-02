#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<vector>
#include<iterator>
using namespace std;
bool FillName(string &name);
void show(const string &t);
int main(void) {
	vector<string>Mat;
	vector<string>Pat;
	vector<string>Merge;
	
	string name;

	cout << "입력 종료 : quit\n";
	cout << "Mat의 친구 이름 : \n";
	getline(cin, name);
	while (FillName(name)) {
		Mat.push_back(name);
		getline(cin, name);
	}
	cout << "Pat의 친구 이름 : \n";
	getline(cin, name);
	while (FillName(name)) {
		Pat.push_back(name);
		getline(cin, name);
	}

	//Mat 와 Pat 합병 후 Set에 저장
	Merge = Mat;
	Merge.insert(Merge.end(), Pat.begin(), Pat.end());
	set<string>MergeSet(Merge.begin(), Merge.end());

	//정렬 후 출력
	sort(Mat.begin(), Mat.end());
	sort(Pat.begin(), Pat.end());
	vector<string>::iterator it;
	for (it = Mat.begin(); it != Mat.end(); it++)
		show(*it);
	cout << endl;
	for (it = Pat.begin(); it != Pat.end(); it++)
		show(*it);
	cout << endl;
	
	ostream_iterator<string, char>out(cout, " ");
	copy(MergeSet.begin(), MergeSet.end(),out);
}
bool FillName(string &na) {
	if (na == "quit")
		return false;
	return true;
}
void show(const string &t) {
	cout << t << " ";
}