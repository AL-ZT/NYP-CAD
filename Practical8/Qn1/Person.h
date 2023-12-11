#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	Person();
	Person(string n, string b);
	virtual void display() const;
	~Person();

private :
	string name;
	string birthday;
};