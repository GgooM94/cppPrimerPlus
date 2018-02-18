#include<iostream>
#include"account01.h"

Account::Account() {
	m_name = "이름";
	m_account = "계좌번호";
	m_money = 0.0;
}
Account::Account(const string &name, const string &account, double money) {
	m_name = name;
	m_account = account;
	m_money = money;
}
void Account::show(void) const{
	std::cout << "예금주 : " << m_name << std::endl;
	std::cout << "계좌번호 : " << m_account << std::endl;
	std::cout << "잔액 : " << m_money <<"원"<< std::endl<<std::endl;
}
void Account::deposit(double cash) {
	if (cash < 0)
		std::cout << "입금 금액은 0보다 작을 수 없습니다.\n";
	else {
		std::cout << cash << "원 입금 되었습니다.\n";
		m_money += cash;
	}
		
}
void Account::withdraw(double cash) {
	if (cash < 0)
		std::cout << "출금 금액은 0보다 작을 수 없습니다.\n";
	else if (m_money < cash) {
		std::cout << "잔액 부족\n";
	}
	else{
		std::cout << cash << "원 출금 되었습니다.\n";
		m_money -= cash;
	}
		
}

