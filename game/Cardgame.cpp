#include "Cardgame.h"
#include <iostream>

using namespace std;


Cardgame::Cardgame(int p)
{
	players = p;
	totalparticipants += p;
	cout << p << " players have started a new game. There are now " << totalparticipants << " players in total." << endl;
}


Cardgame::~Cardgame(void)
{
}
