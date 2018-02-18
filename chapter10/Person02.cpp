#include<iostream>
#include"Person02.h"
Person::Person() {
	m_lanme = "";
	m_fname[0] = '\0';
}
Person::Person(const std::string &ln, const char *fn) {
	m_lanme = ln;
	strcpy_s(m_fname, fn);
}
void Person::Show() const {
	std::cout << "이름 성씨 형식 : " << m_lanme << " " << m_fname << std::endl;
}
void Person::formalShow() const {
	std::cout << "성씨, 이름 형식 : " << m_fname << " " << m_lanme << std::endl;
}
