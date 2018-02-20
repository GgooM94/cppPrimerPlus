#include<cstring>
#include"string02.h"
#include<cctype>
using std::cout;
using std::cin;

int String::num_strings = 0;

int String::HowMany() {
	return num_strings;
}

//생성자와 기타 메서드
String::String(const char *s) {
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str,len+1, s);
	num_strings++;
}
String::String() {
	len = 4;
	str = new char[len];
	str[0] = '\0';
	num_strings++;
}
String::String(const String &st) {
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	num_strings++;
}
String::~String() {
	--num_strings;
	delete[] str;
}

void String::stringup() {
	for (int i = 0; i < len; i++) {
		str[i]= toupper(str[i]);
	}
}

void String::stringlow() {
	for (int i = 0; i < len; i++) {
		str[i] = tolower(str[i]);
	}
}
int String::has(char ch) {
	int cnt(0);
	for (int i = 0; i < len; i++) {
		if (str[i] == 'A')
			cnt++;
	}
	return cnt;
}

//오버로딩 연산자 메서드
String & String::operator=(const String &st) {
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, st.str);
	return *this;
}

String & String::operator=(const char *s) {
	delete[] str;
	len = strlen(s);
	str = new char[len + 1];
	strcpy_s(str, len + 1, s);
	return *this;
}

String String::operator+(const String &st) {
	String temp;
	temp.len = len + st.len;
	temp.str = new char[temp.len + 1];
	strcpy_s(temp.str, temp.len+1, str);
	strcat_s(temp.str, temp.len + 1, st.str);
	return temp;
}

char & String::operator[](int i) {
	return str[i];
}
const char & String::operator[](int i)const {
	return str[i];
}

//오버로딩 연산자 프렌드
String operator+(const String &st1, const String &st2) {
	String temp;
	temp.len = st1.len + st2.len;
	temp.str = new char[temp.len + 1];
	strcpy_s(temp.str, temp.len + 1, st1.str);
	strcat_s(temp.str, temp.len + 1, st2.str);
	return temp;
}

bool operator<(const String &st1, const String & st2) {
	return st1.str < st2.str;
}
bool operator>(const String &st1, const String & st2) {
	return st1.str > st2.str;
}
bool operator==(const String &st1, const String & st2) {
	return (strcmp(st1.str, st2.str) == 0);
}
ostream & operator<<(ostream &os, const String &st) {
	os << st.str;
	return os;
}
istream & operator >> (istream &is, String &st) {
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}