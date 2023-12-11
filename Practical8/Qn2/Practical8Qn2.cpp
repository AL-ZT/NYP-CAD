// Practical8Qn2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Athlete.h"
#include "TennisPlayer.h"
#include "BasketballPlayer.h"
#include <vector>

int main()
{
	vector<Athlete*> Athletes;
	Athlete* Athlete1 = new Athlete;
	BasketballPlayer* BasketballPlayer1 = new BasketballPlayer;
	TennisPlayer* TennisPlayer1 = new TennisPlayer;
	Athlete1->read("Athlete1", 5000);
	BasketballPlayer1->read("BasketballPlayer1", 10000, "BestBasketBallTeam", 150);
	TennisPlayer1->read("TennisPlayer1", 15000, 1);
	Athletes.push_back(Athlete1);
	Athletes.push_back(BasketballPlayer1);
	Athletes.push_back(TennisPlayer1);

	for (int i = 0; i < Athletes.size(); i++) {
		Athletes[i]->display();
	}
	system("PAUSE");
	return 0;
}