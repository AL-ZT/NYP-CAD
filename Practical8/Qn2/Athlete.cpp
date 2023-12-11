#include "stdafx.h"
#include "Athlete.h"


Athlete::Athlete()
{
	name = "";
	annual_salary = 0;
}

void Athlete::read(string n, double a) {
	name = n;
	annual_salary = a;
}

void Athlete::display() const {
	cout << "Name : " << name << '\n' << "Annual Salary : $" << annual_salary << endl;
}

Athlete::~Athlete()
{
}
