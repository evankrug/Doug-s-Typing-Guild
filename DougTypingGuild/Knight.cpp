#include "Knight.h"
#include <iostream>

using namespace std;

Knight::Knight(int startTick, int Startlevel)
{
	interval = startTick;
	level = Startlevel;
}

int Knight::Movement(int KnightX)
{
	return KnightX + STEP;
}

int Knight::getSpeed()
{
	if (level >= 2)
	{
		return interval - (5 * (level - 1));
	}
	else
		return interval;
}

/*
void main()
{
	int X = 0;
	Knight * k = new Knight();
	cout << X;
	k->Movement(X);
	cout << X;
}
*/
