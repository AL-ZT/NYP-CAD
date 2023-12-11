#include "stdafx.h"
#include "TennisPlayer.h"


TennisPlayer::TennisPlayer() : Athlete()
{
	worldRanking = 0;
}

void TennisPlayer::read(string n, double a, int w) {
	Athlete::read(n, a);
	worldRanking = w;
}

void TennisPlayer::display() const {
	Athlete::display();
	cout << "World Ranking : " << worldRanking << endl;
}

TennisPlayer::~TennisPlayer()
{
}
