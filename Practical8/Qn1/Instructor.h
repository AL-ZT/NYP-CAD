#pragma once
#include "Person.h"

class Instructor :
	public Person
{
public:
	Instructor();
	Instructor(string n, string b, double s);
	void display() const;
	~Instructor();

private :
	double salary;
};

