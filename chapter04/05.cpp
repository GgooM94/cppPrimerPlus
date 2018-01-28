#include<iostream>
#include<string>
using namespace std;
struct CandyBar {
	string name;
	double weight;
	int kcal;
};

int main(void) {
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << "Name : " << snack.name << endl;
	cout << "Weight : " << snack.weight << endl;
	cout << "Kcal : " << snack.kcal << endl;;
}
