#include "stdafx.h"
#include "Student.h"

Student::Student():Person() {
	major = "Major at memes";
}

Student::Student(string n, string b, string m):Person(n, b)
{
	major = m;
}

void Student::display() const {
	Person::display();
	cout << "Major : " << major << endl;
}

Student::~Student()
{
}
