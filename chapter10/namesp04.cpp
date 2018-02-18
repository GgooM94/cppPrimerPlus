#include<iostream>
#include"namesp04.h"
using std::cout;
using std::cin;

SALES::SALES() {
	double tot(0);	
	cout << 1 << " 분기 판매액 : ";
	cin >> sales[0];
	max = sales[0];
	min = sales[0];

	for (int i = 1; i < QUARTERS; i++) {
		cout << i + 1 << " 분기 판매액 : ";
		cin >> sales[i];
		tot += sales[i];
		if (max < sales[i])
			max = sales[i];
		if (min > sales[i])
			min = sales[i];
	}
	average = tot / QUARTERS;
}
SALES::SALES(const double ar[], int n) {
	double tot(0);
	int QUARTERS = SALES::QUARTERS < n ? SALES::QUARTERS : n;

	max = ar[0];
	min = ar[0];
	for (int i = 0; i < QUARTERS; i++) {
		sales[i] = ar[i];
		cout << i + 1 << " 분기 판매액 : " << sales[i] << std::endl;
		tot += sales[i];
		if (max < sales[i])
			max = sales[i];
		if (min > sales[i])
			min = sales[i];
	}
	for (int i = QUARTERS; i < SALES::QUARTERS; i++) {
		sales[i] = 0;
		cout << i + 1 << " 분기 판매액 : " << sales[i] << std::endl;
	}
	average = tot / QUARTERS;

}
void SALES::showSales() {
	cout << "Average : " << average << std::endl;
	cout << "Max : " << max << std::endl;
	cout << "Min : " << min << std::endl;
}
