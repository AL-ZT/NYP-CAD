#pragma once
#include "Athlete.h"
class BasketballPlayer :
	public Athlete
{
public:
	BasketballPlayer();
	void read(string, double, string, double);
	void display() const;
	~BasketballPlayer();

private :
	string teamName;
	double avgpoints;
};

