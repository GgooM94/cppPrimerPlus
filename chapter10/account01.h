#pragma once
#include<string>
using std::string;
class Account {
private:
	string m_name;
	string m_account;
	double m_money;
public:
	Account();
	Account(const string &name, const string &account, double money =0.0);
	void show(void) const;
	void deposit(double cash);
	void withdraw(double cash);
};