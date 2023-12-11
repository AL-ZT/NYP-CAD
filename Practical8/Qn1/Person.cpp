#include "stdafx.h"
#include "Person.h"

Person::Person() {
	name = "lol";
	birthday = "2 Feb 2000";
}

Person::Person(string n, string b)
{
	name = n;
	birthday = b;
}

void Person::display() const {
	cout << "Name : " << name << '\n' << "Birthday : " << birthday << endl;
}

Person::~Person()
{
}
