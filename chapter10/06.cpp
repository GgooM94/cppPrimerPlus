#include<iostream>
using namespace std;
class Move {
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);
	void showmove() const;
	Move add(const Move &m);
	void reset(double a = 0, double b = 0);
};
Move::Move(double a, double b) {
	x = a;
	y = b;
}
void Move::showmove() const {
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}
Move Move::add(const Move &m) {
	x += m.x;
	y += m.y;

	return *this;
}
void Move::reset(double a, double b) {
	x = a;
	y = b;
}

int main(void) {
	Move testA(10, 20);
	Move testB(5, 5);;
	testA.showmove();

	cout << "Add testB\n";
	testA.add(testB);
	testA.showmove();

	cout << "reset\n";
	testA.reset(1, 1);
	testA.showmove();
}