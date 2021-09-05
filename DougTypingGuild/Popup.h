#pragma once
#include <string>
using namespace std;

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: Keeps track of popups in order for ReactGameForm to work.
//---------------------------------------------------------------------
class Popup
{
public:
	//--------------------------------------------------
	// Popup constructor
	//-------------------------------------------------
	Popup(string w);

	//--------------------------------------------------
	// 
	//-------------------------------------------------
	bool IsActive();

	//--------------------------------------------------
	// Increments number of ticks
	//-------------------------------------------------
	void IncrTicks();

	//--------------------------------------------------
	// Returns the word
	//-------------------------------------------------
	string GetPop() { return word; }
	int getTicks() { return ticks; }
private:
	int ticks = 0;
	string word;
};