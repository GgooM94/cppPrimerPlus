#include<iostream>
using namespace std;
double add(double x, double y) { return x + y; }
double sub(double x, double y) { return x - y; }
double mul(double x, double y) { return x * y; }
double div(double x, double y) { return x / y; }

double calculate(double x, double y, double(*pf[])(double, double)) {
	return (*pf)(x, y);
}
int main(void) {
	int x, y;                              
	cin >> x >> y;
	double(*pf[4])(double, double) = { add,sub,mul,div };

	cout << x << " + " << y << " = " << calculate(x, y, pf + 0) << endl;
	cout << x << " - " << y << " = " << calculate(x, y, pf + 1) << endl;
	cout << x << " * " << y << " = " << calculate(x, y, pf + 2) << endl;
	cout << x << " / " << y << " = " << calculate(x, y, pf + 3) << endl;
}