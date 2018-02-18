#pragma once
#ifndef Namesp_h
#define Namesp_h

class SALES {
private:
	static const int QUARTERS = 4;
	double sales[QUARTERS];
	double average;
	double max;
	double min;

public:
	SALES();
	SALES(const double ar[], int n);
	void showSales();
};
#endif // !Namesp_h
