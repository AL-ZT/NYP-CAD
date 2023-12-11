#include "stdafx.h"
#include "Instructor.h"

Instructor::Instructor():Person() {
	salary = 0;
}

Instructor::Instructor(string n, string b, double s):Person(n, b)
{
	salary = s;
}

void Instructor::display() const {
	Person::display();
	cout << "Salary : $" << salary << endl;
}

Instructor::~Instructor()
{
}
