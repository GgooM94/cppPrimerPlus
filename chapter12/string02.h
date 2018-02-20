#pragma once
#ifndef STRING_H
#define STRING_H

#include<iostream>
using std::ostream;
using std::istream;

class String {
private:
	char *str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
//생성자와 기타 메서드
	String(const char *s);
	String();
	String(const String &st);
	~String();
	int length() const { return len; }
	void stringup();
	void stringlow();
	int has(char ch);

//오버로딩 연산자 메서드
	String & operator=(const String &st);
	String & operator=(const char *s);
	String operator+(const String &st);
	char & operator[](int i);
	const char & operator[](int i)const;

//오버로딩 연산자 프렌드
	friend bool operator<(const String &st1, const String & st2);
	friend bool operator>(const String &st1, const String & st2);
	friend bool operator==(const String &st1, const String & st2);
	friend String operator+(const String &st1, const String &st2);
	friend ostream & operator<<(ostream &os, const String &st);
	friend istream & operator >> (istream &is, String &st);

//static 함수
	static int HowMany();
};
#endif // !STRING_H
