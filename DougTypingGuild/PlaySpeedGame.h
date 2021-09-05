#pragma once

#include "DatabaseManager.h"
#include "WPM.h"
#include <sstream>

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This is the class that performs the backend logic to
//          play Speed Game.
//---------------------------------------------------------------------
class PlaySpeedGame
{

public:

	//----------------------------------------------------------
	// Constructor
	//----------------------------------------------------------
	PlaySpeedGame() { level = 1; }

	//----------------------------------------------------------
	// Increments level
	//----------------------------------------------------------
	void IncreaseLevel() { ++level; }

	//----------------------------------------------------------
	// Pauses game
	//----------------------------------------------------------
	bool PauseGame();

	//----------------------------------------------------------
	// Retrieves an appropriate set of words according to the level
	// and sets line length
	//----------------------------------------------------------
	void PlayLevel(int level);

	//Pause Game after complete or restart if fail
	//if pass increase level
	// fail restart
	// pause

	//----------------------------------------------------------
	// Moves knight back 
	//----------------------------------------------------------
	int BackKnight();

	//----------------------------------------------------------
	// Returns level num
	//----------------------------------------------------------
	int GetLevel();

	//----------------------------------------------------------
	// Ends the level
	//----------------------------------------------------------
	void EndLevel();

	//----------------------------------------------------------
	// Counts the number words to calculate WPM
	//----------------------------------------------------------
	void CountWords() { wordCount++; }

	//----------------------------------------------------------
	// Returns the number of words counted
	//----------------------------------------------------------
	int GetWordCount() { return wordCount; }

	//----------------------------------------------------------
	// Returns the number ticks passed to calculate WPM
	//----------------------------------------------------------
	int GetTicks() { return ticks; }

	//----------------------------------------------------------
	// Increments the number of "ticks" and returns the WPM
	//----------------------------------------------------------
	int IncrTicks(); //

	//----------------------------------------------------------
	// Returns the current word
	//----------------------------------------------------------
	string GetWord();

   //----------------------------------------------------------
   // Counts the characters
   //----------------------------------------------------------
	void countChars() { charCount++; }

   // Not Implemented
	void undo(int kl, int dl);

   // Not Implemented
	void redo();

   //----------------------------------------------------------
   // Returns the current distance of the knight
   //----------------------------------------------------------
	int getkl() { return knightLength; }

   //----------------------------------------------------------
   // Returns the current distance of Doug
   //----------------------------------------------------------
	int getdl() { return dougLength; }
private:

	int level = 1;

	//KeyDatabase * data = new KeyDatabase();
   DatabaseManager *dm = new DatabaseManager();

	vector<string> wordsInUse = dm->getWordList(level);

	char mychar;
	int lineLength;
	int availableWords;
	const int MAX_LINE_LENGTH = 20; // Maximum length of an output line
	const int MIN_LINE_LENGTH = 5;
	const int TARGET_ACCURACY = 90;
	int dougLength = 0;
	int knightLength = 0;
	int wordCount = 0;
	int charCount = 0;
	int ticks = 0;
	WPM wpm;
	//History * history = new History();

};