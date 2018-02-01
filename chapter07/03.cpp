#include<iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void printAdd(box *caseA);
void printValue(box caseA);

int main(void) {
	box caseA = { "노란박스", 10.0, 10.0, 20.5, 0 };
	printAdd(&caseA);
	printValue(caseA);
}

void printAdd(box *caseA) {
	caseA->volume = caseA->height * caseA->width * caseA->length;
}

void printValue(const box caseA) {
	cout << "Maker : " << caseA.maker << endl;
	cout << "height : " << caseA.height << endl;
	cout << "width : " << caseA.width << endl;
	cout << "length : " << caseA.length << endl;
	cout << "volume : " << caseA.volume << endl;
}
