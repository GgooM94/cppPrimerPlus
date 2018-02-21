#pragma once
#ifndef STACK_H
#define STACK_H

typedef unsigned long Item;

class Stack {
private:
	enum{MAX = 5};
	Item * pitems;
	int size;
	int top;
public:
	Stack(int n = MAX);
	Stack(const Stack &st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item &item);
	bool pop(Item &item);
	Stack&operator=(const Stack &st);
};


#endif // !STACK_H
