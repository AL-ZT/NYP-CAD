#include "stdafx.h"
#include "BasketballPlayer.h"


BasketballPlayer::BasketballPlayer() : Athlete()
{
	avgpoints = 0;
}

void BasketballPlayer::read(string n, double a, string t, double avg) {
	Athlete::read(n, a);
	avgpoints = avg;
	teamName = t;
}

void BasketballPlayer::display() const {
	Athlete::display();
	cout << "Team Name : " << teamName << endl;
	cout << "Average Points Per Game : " << avgpoints << endl;

}

BasketballPlayer::~BasketballPlayer()
{
}
