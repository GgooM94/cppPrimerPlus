#pragma once
#ifndef GOLF_H
#define GOLF_H

#include<cstring>
class Golf {
private:
	static const int Len = 40;
	char m_fullname[Len];
	int m_handicap;
public:
	Golf();
	Golf(const char *fullanme, int hc);

	void handicap(int hc);
	void showgolf() const;

};
#endif // Golf_h

