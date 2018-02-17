#include<iostream>
#include<new>

const int BUF = 512;
const int N = 5;
char buffer[BUF];

struct chaff {
	char dross[20];
	int slag;
};

int main(void) {
	chaff *p1 = new (buffer) chaff[N];
	chaff p2[10];
	for (int i = 0; i < N; i++) {
		char temp[20];
		std::cout << "dross[" << i << "] : ";
		std::cin >> temp;
		strcpy_s(p1[i].dross, temp);
		std::cout << "slag[" << i << "] : ";
		std::cin >> p1[i].slag;
		std::cout << std::endl;
	}
	std::cout << "메모리 내용 : " << std::endl;
	for (int i = 0; i < N; i++) {
		std::cout << &p1[i].dross << "\t" << p1[i].dross << "\t";
		std::cout << &p1[i].slag << "\t" << p1[i].slag << std::endl;
	}

}