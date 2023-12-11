#pragma once
#include <iostream>
#include <string>
using namespace std;

class Athlete
{
public:
	Athlete();
	virtual void read(string, double);
	virtual void display() const;
	~Athlete();

private :
	string name;
	double annual_salary;
};

