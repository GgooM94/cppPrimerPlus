#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
vector<int>Lotto(int MAX, int n);
void showWinners(const int &it);

int main(void) {
	vector<int>winners;
	winners = Lotto(51, 6);
	vector<int>::iterator it;
	for (it = winners.begin(); it != winners.end(); it++)
		showWinners(*it);

}

vector<int>Lotto(int MAX, int n) {
	vector<int>temp;
	for (int i = 0; i < MAX; i++)
		temp.push_back(i + 1);
	random_shuffle(temp.begin(), temp.end());
	temp.erase(temp.begin() + 6, temp.end());
	return temp;
}
void showWinners(const int &it) {
	cout << it << " ";
}