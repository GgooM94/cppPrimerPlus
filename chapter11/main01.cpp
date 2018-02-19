#include<iostream>
#include<cstdlib>
#include<ctime>
#include"vect01.h"

int main(void) {
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;

	int MAX(0);
	

	cout << "목표 거리를 입력하십시오(끝내려면 q) : ";
	while (cin >> target)
	{
		cout << "보폭을 입력하십시오 : ";
		if (!(cin >> dstep))
			break;

		cout << "시도 횟수 : ";
		if (!(cin >> MAX))
			break;
		double maxSteps(0);
		double minSteps(pow(target / dstep, 2));
		double avgSteps(0);
		double totSteps(0.0);
		for (int i = 0; i < MAX; i++) {
			steps = 0;
			result.reset(0.0, 0.0);

			while (result.magval() < target) {
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
				steps++;
			}
			if (maxSteps < steps)
				maxSteps = steps;
			if (minSteps > steps)
				minSteps = steps;
		
			totSteps += steps;	
		}

		avgSteps = totSteps / MAX;
		cout << MAX << "번 시도 결과 : " << "평균 : " << avgSteps << "   최고 : " << maxSteps << "   최저   : " << minSteps << endl<<endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "목표 거리를 입력하십시오(끝내려면 q) : ";
	}
	cout << "프로그램을 종료합니다.\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
}
