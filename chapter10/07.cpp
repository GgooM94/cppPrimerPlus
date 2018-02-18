#include<iostream>
using namespace std;

class Plorg {
private:
	char name[20];
	int CI;
public:
	Plorg();
	Plorg(const char *na, int n = 50);
	void setCI(int n);
	void showPlorg() const;
};

Plorg::Plorg() {
	strcpy_s(name, "Plorga");
	CI = 50;
}
Plorg::Plorg(const char *na, int n) {
	strcpy_s(name, na);
	CI = n;
}
void Plorg::showPlorg() const {
	cout << "plorg : " << name << "\nCI : " << CI << endl;
}
void Plorg::setCI(int n) {
	CI = n;
}

int main(void) {
	Plorg testA;
	testA.showPlorg();

	Plorg testB("GgooM",100);
	testB.showPlorg();
	testB.setCI(109);
	testB.showPlorg();
}