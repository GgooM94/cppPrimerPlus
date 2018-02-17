#include<iostream>
#include"sales_04.h"

void SALES::setSales(Sales &s, const double ar[], int n) {
	using std::cout;
	using std::cin;
	using std::endl;
	double tot(0);
	int range = (QUARTERS < n ? QUARTERS : n);
	s.max = ar[0];
	s.min = ar[0];
	for (int i = 0; i <range; i++) {
		s.sales[i] = ar[i];
		tot += s.sales[i];

		if (s.max < s.sales[i])
			s.max = s.sales[i];

		if (s.min > s.sales[i])
			s.min = s.sales[i];
	}
	s.average = tot / range;
	for (int i = range; i < QUARTERS; i++) {
		s.sales[i] = 0;
	}
}
void SALES::setSales(Sales &s) {
	using std::cout;
	using std::cin;
	using std::endl;
	double tot(0);
	cout << 1 << "분기 판매 금액 : ";
	cin >> s.sales[0];
	s.max = s.sales[0];
	s.min = s.sales[0];

	for (int i = 1; i < QUARTERS; i++) {
		cout << i + 1 << "분기 판매 금액 : ";
		cin >> s.sales[i];
		tot += s.sales[i];

		if (s.max < s.sales[i])
			s.max = s.sales[i];

		if (s.min > s.sales[i])
			s.min = s.sales[i];
	}
	s.average = tot / QUARTERS;
}
void SALES::showSales(const Sales &s) {
	using std::cout;
	using std::endl;
	cout << "sales : " << s.sales[0] << "  " << s.sales[1] << "  " << s.sales[2] << "  " << s.sales[3] << endl;
	cout << "average : " << s.average << endl;
	cout << "max : " << s.max << endl;
	cout << "min : " << s.min << endl;
}
