#include<iostream>
#include "golf_01.h"

void setgolf(golf &g, const char *name, int hc) {
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf &g) {
	std::cout << "fullname : ";
	std::cin.get();
	std::cin.getline(g.fullname, Len);
	if (strlen(g.fullname) == 0)
		return 0;

	std::cout << "handicap : ";
	std::cin >> g.handicap;
	return 1;
}

void handicap(golf &g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf & g) {
	std::cout << "fullname : " << g.fullname << std::endl;
	std::cout << "handicap : " << g.handicap << std::endl;
}