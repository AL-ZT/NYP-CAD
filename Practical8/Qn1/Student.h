#pragma once
#include "Person.h"

class Student :
	public Person
{
public:
	Student();
	Student(string n, string b, string m);
	void display() const;
	~Student();

private :
	string major;
};

