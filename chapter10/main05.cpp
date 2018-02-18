#include<iostream>
#include"stack05.h"
#include<cctype>
int main(void) {
	Stack cus;
	customer people;
	bool open = true;
	while (open) {
		std::cout << "1 : New Customer\n2 : Customer Payment\n3 : Exit\n";
		int n;
		std::cin >> n;
		switch (n)
		{
		case 1 :
			if (cus.isfull())
				std::cout << "스택이 가득 차 있습니다\n";
			else {
				std::cout << "Customer Fullname : ";
				std::cin >> people.fullname;
				std::cout << "Customer Payment : ";
				if (std::cin >> people.payment)
				{
					cus.push(people);
				}
				else {
					std::cout << "금액을 잘못 입렸하셨습니다. 프로그램을 종료합니다.\n";
					open = false;
				}
			}
			break;
		case 2:
			if (cus.isempty())
				std::cout << "스택이 비어 있습니다.\n";
			else{
				cus.pop(people);
				std::cout << people.fullname << " Payment : " << people.payment << "지불\n";
				cus.totMoney(people.payment);
				cus.showMoney();
			}
			break;

		case 3:
			open = false;
			break;
		default:
			std::cout << "잘못 입력하셨습니다.\n";
			break;

		}
		std::cout << std::endl;
	}



}