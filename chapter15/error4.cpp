#include<iostream>
#include<cmath>
#include<string>
#include"exc_mean.h"
using std::string;
using std::cout;
using std::cin;

class demo {
	
private:
	string word;
public:
	demo(const string &str) {
		word = str;
		cout << "demo " << word << " ����\n";
	}
	~demo() {
		cout << "demo " << word << " �ı�\n";
	}
	void show() const {
		cout << "demo " << word << " ����\n";
	}
};
double hmean(double a, double b) throw(bad_hmean);
double gmean(double a, double b)throw(bad_gmean);
double means(double a, double b)throw(bad_hmean, bad_gmean);

int main(void) {
	double x, y, z;
	{
		demo d1("found in block in main()");
		cout << "�� ���� �Է��Ͻʽÿ� : ";
		while (cin >> x >> y) {
			try {
				z = means(x, y);
				cout << x << "�� " << y << "�� ����� ����� " << z << std::endl;
				cout << "���� �� ���� �Է��Ͻʽÿ�: ";
			}
			catch (bad_hmean &bg) {
				bg.mesg();
				cout << "�ٽ� �Ͻʽÿ�.\n";
				continue;
			}
			catch (bad_gmean & hg) {
				cout << hg.mesg();
				cout << "���� �� ��: " << hg.v1 << ", " << hg.v2 << std::endl;
				cout << "�˼��մϴ�. �� �̻� ������ �� �����ϴ�.\n";
				break;
			}
		}
		d1.show();
	}
	cout << "���α׷��� �����մϴ�.\n";
	cin.get();
	cin.get();
}

double hmean(double a, double b) {
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0*a*b / (a + b);
}
double gmean(double a, double b) {
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a*b);
}
double means(double a, double b) {
	double am, hm, gm;
	demo d2("found in means()");
	am = (a + b) / 2.0;
	try {
		hm = hmean(a, b);
		gm = gmean(a, b);
	}
	catch (bad_hmean & bg) {
		bg.mesg();
		std::cout << "means() ���� ����\n";
		throw;
	}
	d2.show();
	return (am + hm + gm) / 3.0;
}