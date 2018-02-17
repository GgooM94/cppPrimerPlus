#include<iostream>
#include"golf_01.h"
int main(void) {
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);

	int MAX(0);
	std::cout << "MAX : ";
	std::cin >> MAX;
	golf *andy = new golf[MAX];
	int i = 0;
	while (i < MAX && setgolf(andy[i])) {
		i++;
	}
	for (int k = 0; k < i; k++) {
		showgolf(andy[k]);
	}
}