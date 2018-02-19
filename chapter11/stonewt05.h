#pragma once
#ifndef STONEWT_H
#define STONEWT_H

class Stonewt {
private:

	enum { Lbs_per_stn = 14 ,State_Stone =1, State_Pounds =2};
	int stone;
	double pds_left;
	double pounds;
	int state;
public:
	Stonewt(double lbs);
	Stonewt();
	~Stonewt();
	void setState(int n);
	Stonewt operator+(const Stonewt &s);
	Stonewt operator-(const Stonewt &s);
	Stonewt operator*(double m);
	friend Stonewt operator*(double m, const Stonewt &s);
	friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};
#endif // !STONEWT_H
