#include"Port04.h"
using namespace std;
Port::Port(const char *br, const char *st, int b) {
	brand = new char[strlen(br) + 1];
	strcpy_s(brand, strlen(br) + 1, br);
	strcpy_s(style, strlen(st) + 1, st);
	bottles = b;
}
Port::Port(const Port &p) {
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strcpy_s(style, strlen(p.style) + 1, p.style);
	bottles = p.bottles;
}
Port& Port::operator=(const Port &p) {
	if (this == &p)
		return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strcpy_s(style, strlen(p.style) + 1, p.style);
	bottles = p.bottles;
	return *this;
}
Port& Port::operator+=(int b) {
	bottles += b;
	return *this;
}
Port& Port::operator-=(int b) {
	bottles -= b;
	return *this;
}
int Port::BottleCount()const {
	return bottles;
}
void Port::Show()const {
	std::cout << "브랜드 : " << brand << std::endl;
	std::cout << "스타일 : " << style << std::endl;
	std::cout << "수량 : " << bottles << std::endl;
}
ostream& operator<<(ostream &os, const Port &p) {
	os << p.brand << ", " << p.style << ", " << p.bottles << std::endl;
	return os;
}

VintagePort::VintagePort():Port() {
	nickname = new char[5];
	strcpy_s(nickname, 5, "None");
	year = 0;
}
VintagePort::VintagePort(const char *br, int b, const char*nn, int y):Port(br,"None",b){
	nickname = new char[strlen(nn) + 1];
	strcpy_s(nickname, strlen(nn) + 1, nn);
	year = y;
}
VintagePort::VintagePort(const VintagePort &vp):Port(vp) {
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
}
VintagePort& VintagePort::operator=(const VintagePort&vp) {
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
	return *this;
}
void VintagePort::Show() const {
	std::cout << "NickName : " << nickname << std::endl;
	std::cout << "포도 수확 년도 : " << year << std::endl;
}
ostream& operator<<(ostream &os, const VintagePort &vp) {
	os << vp.nickname << ", " << vp.year<<std::endl;
	return os;
}
