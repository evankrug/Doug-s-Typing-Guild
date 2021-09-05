#pragma once

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: Controls the Enemy Knight by moving its position, and reseting its 
//          position for Speed Game.
//---------------------------------------------------------------------
class Knight
{

public:

	//---------------------------------------------------------------------
	// Knight constructor
	//--------------------------------------------------------------------
	Knight(int startTick, int Startlevel);

	//---------------------------------------------------------------------
	// Moves knight's position to the right
	//--------------------------------------------------------------------
	int Movement(int KnightX);

	//---------------------------------------------------------------------
	// Returns the knight's speed
	//--------------------------------------------------------------------
	int getSpeed();


	//---------------------------------------------------------------------
	// Updates the level of the night so that it moves at the speed
	//  corresponding to the current level
	//--------------------------------------------------------------------
	void UpdateLevel(int nextLevel) { level = nextLevel; }
private:

	int interval;
	int level = 0;
	const int STEP = 5;
};
