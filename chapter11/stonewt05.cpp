#include<iostream>
using std::cout;
#include"stonewt05.h"

Stonewt::Stonewt(double lbs) {
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
}

Stonewt::Stonewt() {
	stone = pounds = pds_left = 0;
}
Stonewt::~Stonewt(){
}

Stonewt Stonewt::operator+(const Stonewt &s) {
	Stonewt temp;
	temp.pounds = pounds + s.pounds;
	temp.stone = temp.pounds / Lbs_per_stn;
	temp.pds_left = int(temp.pounds)%Lbs_per_stn + temp.pounds - int(pounds);
	temp.state = state;
	return temp;
}
Stonewt Stonewt::operator-(const Stonewt &s) {
	Stonewt temp;
	temp.pounds = pounds - s.pounds;
	temp.stone = temp.pounds / Lbs_per_stn;
	temp.pds_left = int(temp.pounds) % Lbs_per_stn + temp.pounds - int(pounds);
	temp.state = state;
	return temp;
}
Stonewt Stonewt::operator*(double m) {
	Stonewt temp;
	temp.pounds = pounds*m;
	temp.stone = temp.pounds / Lbs_per_stn;
	temp.pds_left = int(temp.pounds) % Lbs_per_stn + temp.pounds - int(pounds);
	temp.state = state;
	return temp;
}
Stonewt operator*(double m, const Stonewt &s) {
	return Stonewt(s.pounds*m);
}
void Stonewt::setState(int n) {
	if (n == 1) {
		state = State_Stone;
	}
	else if (n == 2) {
		state = State_Pounds;
	}
}

std::ostream &operator <<(std::ostream &os, const Stonewt &s) {
	if (s.state == 1) {
		os << s.stone << "스톤, " << s.pds_left << "파운드\n";
		return os;
	}
	else if (s.state == 2) {
		os << s.pounds << "파운드\n";
		return os;
	}
	else {
		os << s.pounds << "출력 형식이 잘못되었습니다.\n";
		return os;
	}

	
}