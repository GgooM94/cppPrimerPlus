#include<iostream>
#include"account01.h"

int main() {
	using std::cout;
	using std::cin;

	Account myAccount("GgoooM94", "1002-1004_000", 0);
	myAccount.show();
	myAccount.deposit(1000);
	myAccount.show();
	myAccount.withdraw(500);
	myAccount.show();
	myAccount.deposit(-1000);
	
	

}