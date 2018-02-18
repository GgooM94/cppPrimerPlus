#pragma once
#ifndef Stack_h
#define Stack_h

struct customer
{
	char fullname[35];
	double payment;
};
typedef customer Item;
class Stack {
private:
	static const int MAX = 3;
	Item items[MAX];
	int top;
	double getMoney;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item & item);
	bool pop(Item & item);
	void totMoney(double &money);
	void showMoney() const;
};




#endif // !Stack_h
