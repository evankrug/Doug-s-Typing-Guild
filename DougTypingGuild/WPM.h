#pragma once

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: The class calculates the words per minute
//---------------------------------------------------------------------
class WPM
{
private:
	int num;  //number of words per minute
	int COUNT_IN_MINUTES = 60; //Needs to be changed if knigt ticks get faster

public:
	//----------------------------------------------------------------
	// WPM constructor
	//----------------------------------------------------------------
	WPM();

	//----------------------------------------------------------------
	// updates words per minute
	//----------------------------------------------------------------
	void Update(int chars, int words, int count);

	//----------------------------------------------------------------
	// Calculates average number of words per minute
	//----------------------------------------------------------------
	double CalculateAvg(int chars, int words);

	//----------------------------------------------------------------
	// Returns number of words per minute
	//----------------------------------------------------------------
	int GetNum() { return num; }

};