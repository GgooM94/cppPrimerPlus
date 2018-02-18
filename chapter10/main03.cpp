#include<iostream>
#include"golf03.h"

int main(void) {
	Golf ann("Ann Birdfree", 24);
	ann.showgolf();
	ann.handicap(100);
	ann.showgolf();
	std::cout << std::endl;

	Golf andy;
	andy.showgolf();
}