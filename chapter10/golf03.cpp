#include<iostream>
#include"golf03.h"
Golf::Golf() {
	std::cout << "Name : ";
	std::cin.getline(m_fullname, Len);
	std::cout << "Handicap : ";
	std::cin >> m_handicap;
}
Golf::Golf(const char *fullname, int hc) {
	strcpy_s(m_fullname, fullname);
	m_handicap = hc;
}
void Golf::handicap(int hc) {
	std::cout << "Handicap " << m_handicap << " -> " << hc << " º¯°æ\n";
	m_handicap = hc;
}
void Golf::showgolf() const {
	std::cout << "Name : " << m_fullname << std::endl;
	std::cout << "Handicap : " << m_handicap << std::endl;
}