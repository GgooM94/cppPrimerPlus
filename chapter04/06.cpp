#include<iostream>
#include<string>
using namespace std;
struct CandyBar {
	string name;
	double weight;
	int kcal;
};

int main(void) {
	CandyBar snack[2];
	snack[0] = { "Mocha Munch", 2.3, 350 };
	snack[1] = { "Hi", 70, 150 };

	cout << "Name : " << snack[0].name << endl;
	cout << "Weight : " << snack[0].weight << endl;
	cout << "Kcal : " << snack[0].kcal << endl;
	cout << "---------------------" << endl;
	cout << "Name : " << snack[1].name << endl;
	cout << "Weight : " << snack[1].weight << endl;
	cout << "Kcal : " << snack[1].kcal << endl;
}
