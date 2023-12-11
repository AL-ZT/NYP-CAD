#pragma once
#include "Athlete.h"
class TennisPlayer :
	public Athlete
{
public:
	TennisPlayer();
	void read(string, double, int);
	void display() const;
	~TennisPlayer();

private : 
	int worldRanking;
};

