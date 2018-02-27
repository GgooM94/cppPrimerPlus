#include"classic.h"
#include<iostream>
#include<cstring>
Cd::Cd(char *s1, char *s2, int n, double x){
	strcpy_s(performers, strlen(s1) + 1, s1);
	strcpy_s(label,strlen(s2)+1, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd&d) {
	strcpy_s(performers,strlen(d.performers)+1, d.performers);
	strcpy_s(label,strlen(d.label)+1, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd() {
	strcpy_s(performers, "Null");
	strcpy_s(label, "Null");
	selections = 0;
	playtime = 0;
}

void Cd::Report()const {
	std::cout << "Performers : " << performers << std::endl;
	std::cout << "Label : " << label << std::endl;
	std::cout << "Selections : " << selections << std::endl;
	std::cout << "Playtime : " << playtime << std::endl;
}

Cd::~Cd(){}

Cd& Cd::operator=(const Cd &d) {
	if (this == &d)
		return *this;
	strcpy_s(performers,strlen(d.performers)+1, d.performers);
	strcpy_s(label, strlen(d.label)+1, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
Classic::Classic(char *s1, char *s2, char *s3,int n, double x) :Cd(s2, s3, n, x) {
		strcpy_s(title,strlen(s1)+1,s1);
}
Classic::Classic():Cd() {
	strcpy_s(title, 10, "NULL");
}
void Classic::Report()const {
	Cd::Report();
	std::cout << "Title : " << title << std::endl;
}
Classic& Classic::operator=(const Classic &d) {
	if (this == &d)
		return *this;
	Cd::operator=(d);
	strcpy_s(title, strlen(d.title) + 1, d.title);
	return *this;
}