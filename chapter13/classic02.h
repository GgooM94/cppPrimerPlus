#pragma once
#ifndef CD_H
#define CD_H
class Cd {
private:
	char *performers;
	char *label;
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
	char *title;

public:
	Classic(char *s1, char *s2, char *s3, int n, double x);
	Classic();
	~Classic();
	void Report() const;
	Classic & operator=(const Classic &c);
};
#endif // !CD_H
