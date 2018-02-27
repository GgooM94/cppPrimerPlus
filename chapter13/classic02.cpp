#include"classic02.h"
#include<iostream>
#include<cstring>
Cd::Cd(char *s1, char *s2, int n, double x) {
	performers = new char[strlen(s1) + 1];
	label = new char[strlen(s2) + 1];
	strcpy_s(performers, strlen(s1) + 1, s1);
	strcpy_s(label, strlen(s2) + 1, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd&d) {
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];

	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd() {
	performers = new char[5];
	label = new char[5];
	strcpy_s(performers,5, "Null");
	strcpy_s(label,5, "Null");
	selections = 0;
	playtime = 0;
}

void Cd::Report()const {
	std::cout << "Performers : " << performers << std::endl;
	std::cout << "Label : " << label << std::endl;
	std::cout << "Selections : " << selections << std::endl;
	std::cout << "Playtime : " << playtime << std::endl;
}

Cd::~Cd() {
	delete[]performers;
	delete[]label;
}

Cd& Cd::operator=(const Cd &d) {
	if (this == &d)
		return *this;
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
Classic::Classic(char *s1, char *s2, char *s3, int n, double x) :Cd(s2, s3, n, x) {
	title = new char[strlen(s1) + 1];
	strcpy_s(title, strlen(s1) + 1, s1);
}
Classic::Classic() : Cd() {
	title = new char[10];
	strcpy_s(title, 10, "NULL");
}
Classic::~Classic() {
	delete[]title;
}
void Classic::Report()const {
	Cd::Report();
	std::cout << "Title : " << title << std::endl;
}
Classic & Classic::operator=(const Classic &c) {
	if (this == &c)
		return *this;
	Cd::operator=(c);
	delete[] title;
	title = new char[strlen(c.title) + 1];
	strcpy_s(title, strlen(c.title) + 1, c.title);
	return *this;
}