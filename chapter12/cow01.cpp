#include<iostream>
#include<cstdarg>
#include"cow01.h"

Cow::Cow() {
	strcpy_s(name, "GgooM");
	hobby = new char[5];
	strcpy_s(hobby, 5, "Game");
	weight = 0;
}
Cow::Cow(const char *nm, const char * ho, double wt) {
	strcpy_s(name, nm);
	int len = strlen(ho);
	hobby = new char[len+1];
	strcpy_s(hobby, len+1, ho);
	weight = wt;
}

Cow::Cow(const Cow& c) {
	strcpy_s(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy_s(hobby,len+1, c.hobby);
	weight = c.weight;
}
Cow::~Cow() {
	std::cout << "¼Ò¸ê\n";
	delete[] hobby;
}
Cow& Cow::operator=(const Cow &c) {
	strcpy_s(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy_s(hobby,len + 1, c.hobby);
	weight = c.weight;
	return *this;
}
void Cow::ShowCow()const {
	using std::cout;
	using std::endl;
	cout << "Name  :  " << name << endl;
	cout << "Hobby  :  " << hobby << endl;
	cout << "Weight  :  " << weight << endl << endl;
}
