#include"mytime04.h"

Time::Time() {
	hours = minutes = 0;
}
Time::Time(int h, int m) {
	hours = h;
	minutes = m;
}
void Time::AddMin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes = minutes % 60;
}
void Time::AddHr(int h) {
	hours += h;
}
void Time::Reset(int h, int m) {
	hours = h;
	minutes = m;
}
Time operator+(const Time &a, const Time &b){
	Time sum;
	sum.minutes = a.minutes + b.minutes;
	sum.hours = a.hours + b.hours + sum.minutes / 60;
	sum.minutes = sum.minutes % 60;
	return sum;
}
Time operator-(const Time &a, const Time &b) {
	Time diff;
	int tot01, tot02;
	tot01 = a.hours * 60 + a.minutes;
	tot02 = b.hours * 60 + b.minutes;
	diff.minutes = (tot01 + tot02) % 60;
	diff.hours = (tot01 + tot02) / 60;
	return diff;
}
Time operator*(const Time &a, double m) {
	Time result;
	long totMin = a.hours * 60 * m + a.minutes*m;
	result.hours = totMin / 60;
	result.minutes = totMin % 60;
	return result;
}

Time operator*(double m, const Time &a) {
	Time result;
	long totMin = a.hours * 60 * m + a.minutes*m;
	result.hours = totMin / 60;
	result.minutes = totMin % 60;
	return result;
}

std::ostream& operator<<(std::ostream &os, const Time &t) {
	os << t.hours << "½Ã°£, " << t.minutes << "ºÐ";
	return os;
}