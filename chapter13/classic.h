#pragma once
#ifndef CD_H
#define CD_H
class Cd {
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(char *s1, char *s2, int n, double x);
	Cd(const Cd & d);
	Cd();

	virtual ~Cd();
	virtual void Report() const;
	Cd & operator=(const Cd &d);
};

class Classic :public Cd {
private:
	char title[50];

public:
	Classic(char *s1, char *s2,char *s3, int n, double x);
	Classic();
	void Report() const;
};
#endif // !CD_H
