#pragma once
#ifndef Person_h
#define Person_h

#include<string>
class Person {
private:
	static const int LIMIT = 25;
	std::string m_lanme;
	char m_fname[LIMIT];
public:
	Person();
	Person(const std::string &ln, const char *fn = "Heyyou");
	void Show() const;
	void formalShow() const;
};


#endif // !Person_h

