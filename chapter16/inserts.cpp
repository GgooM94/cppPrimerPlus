#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;
void output(const string &s) { cout << s << " "; }

int main(void) {
	string s1[4] = { "fine", "fish", "fashion","fate" };
	string s2[2] = { "busy","bats" };
	string s3[2] = { "silly","singers" };
	vector<string>words(4);
	copy(s1, s1 + 4, words.begin());
	for_each(words.begin(), words.end(), output);
	cout << endl;

	//劳疙狼 back_insert_iterator 按眉 积己
	copy(s2, s2 + 2, back_insert_iterator<vector<string>>(words));
	for_each(words.begin(), words.end(), output);
	cout << endl;

	//劳疙狼 insert_iterator 按眉 积己
	copy(s3, s3 + 2, insert_iterator<vector<string>>(words,words.begin()));
	for_each(words.begin(), words.end(), output);
	cout << endl;
}