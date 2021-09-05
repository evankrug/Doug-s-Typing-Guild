#ifndef PLAYREACTGAME_H
#define PLAYREACTGAME_H

#include "DatabaseManager.h"
#include "WPM.h"
#include "Popup.h"
#include <sstream>

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This is the class that performs the backend logic to
//          play React Game.
//---------------------------------------------------------------------
class PlayReactGame
{

public:

	//----------------------------------------------------------
	// Constructor
	//----------------------------------------------------------
	PlayReactGame() { level = 1; }


	//----------------------------------------------------------
	// Pauses the React Game
	//----------------------------------------------------------
	bool PauseGame() { return false; }

	//----------------------------------------------------------
	// Retrieves an appropriate set of words or characters 
	// according to the level and sets line length
	//----------------------------------------------------------
	void PlayLevel(int level);

	//----------------------------------------------------------
	// Resets WPM for the level
	//----------------------------------------------------------
	void EndLevel();

	//----------------------------------------------------------
	// Increments level
	//----------------------------------------------------------
	void IncreaseLevel() { ++level; }

	//----------------------------------------------------------
	// Returns level num
	//----------------------------------------------------------
	int GetLevel() { return level; }

	//----------------------------------------------------------
	// Sets the level number
	//----------------------------------------------------------
	void SetLevel(int newLevel) { level = newLevel; }

	//----------------------------------------------------------
	// Changes the coordinates of the text target
	//----------------------------------------------------------
	void ChangeTextLocation(int & xLoc, int & yLoc);

	//----------------------------------------------------------
	// Increments words typed
	//----------------------------------------------------------
	void CountWords() { wordCount++; }


	//----------------------------------------------------------
	// increments the number of "ticks" and returns the WPM
	//----------------------------------------------------------
	int IncrTicks(); 

	//----------------------------------------------------------
    // Returns word
    //----------------------------------------------------------
	string GetWord();

	//----------------------------------------------------------
	//counts characters typed
	//----------------------------------------------------------
	void countChars() { charCount++; }

	//-------------------------------------------------------------
	// Returns true if the user achieved the target WPM for the level
	//-------------------------------------------------------------
	//bool Pass() { return wpm.GetNum() >= TARGET_WPM; }

	//----------------------------------------------------------
	// sets a popup
	//----------------------------------------------------------
	void SetPopups(string w);

	//----------------------------------------------------------
	//set next popup
	//----------------------------------------------------------
	bool CountPops();

	//----------------------------------------------------------
	//Decrement popups when word is typed
	//----------------------------------------------------------
	void DecPops() { numPops--; }

	//----------------------------------------------------------
	// checks if word typed is correct
	//----------------------------------------------------------
	bool SearchWords(string word);

	//----------------------------------------------------------
	//Gets the amount of time each popup appears for each level
	//----------------------------------------------------------
	int GetPopInterval();

	//----------------------------------------------------------
	// Returns number of ticks
	//----------------------------------------------------------
	int GetTicks() { return ticks; }

	//----------------------------------------------------------
	// Returns the number of words typed (used for testing)
	//----------------------------------------------------------
	int GetWordCount() { return wordCount; }

	//----------------------------------------------------------
	// Returns the number of chars typed (used only for testing)
	//----------------------------------------------------------
	int GetCharCount() { return charCount; }

	//----------------------------------------------------------
	// Returns the number of pops (Used for testing only)
	//----------------------------------------------------------
	int GetNumPops() { return numPops; }

	//----------------------------------------------------------
	// Returns the pop at given index (used for testing only)
	//----------------------------------------------------------
	Popup GetPops(int i) { return *pops[i]; }




private:

	int level = 1;

	DatabaseManager *dm = new DatabaseManager();

	vector<string> wordsInUse = dm->getWordList(level);

	char mychar;
	int lineLength;
	int availableWords;

	const int MAX_LINE_LENGTH = 8; // Maximum length of an output line
	const int MIN_LINE_LENGTH = 2;
	const int TARGET_WPM = 30;           // Target WPM for a particular level is 30

	const int RIGHT_LIMIT = 600;   //the farthest to the right that text may appear on the screen
	const int LEFT_LIMIT = 200;
	const int UPPER_LIMIT = 10;
	const int LOWER_LIMIT = 400;
	const static int MAX_POPUPS = 3;
	int wordCount = 0;
	int ticks = 0;
	int charCount = 0;
	WPM wpm;
	Popup * pops[MAX_POPUPS];
	int numPops = 0;

	//WPM
	// int GetWPM();


};

#endif