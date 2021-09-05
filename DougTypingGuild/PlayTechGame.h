#pragma once

#include "Accuracy.h"
#include "DatabaseManager.h"
#include <sstream>

//---------------------------------------------------------------------
// Name:    Team Simplicity
// Project: Doug's Typing Guild is designed to have three games
//          that teach and improve a user's computer typing skills.
// Purpose: This is the class that performs the backend logic to
//          play Tech Game.
//---------------------------------------------------------------------
class PlayTechGame
{
private:
	int mistakes = 0;
	int numChars = 0;
	int totalMistakes = 0;
	int totalChars = 0;
	int lineLength;
	int availableChars;
    DatabaseManager *dm = new DatabaseManager();
	vector<char> charsInUse = dm->getCharList(level);
	char mychar;


	Accuracy check;
	Accuracy cumulative;
	const int MAX_LINE_LENGTH = 20; // Maximum length of an output line
	const int MIN_LINE_LENGTH = 5;
	const int TARGET_ACCURACY = 80;
	const int DECIMAL_PLACES = 3;
	int level = 1;

	string dougquotes[27]{ "Prepareth thy index fingers.Lay thy left index on F and thy right on J.",
		"Prepareth thy index fingers. Lay thy left index on R and thy right on U.",
		"Prepareth thy index fingers. Lay thy left index on V and thy right on N.",
		"We art in need of thy middle fingers for the letters are relentless. Useth thy left middle on d and thy right middle on k.",
		"We art in need of thy middle fingers for the letters are relentless. Useth thy left middle on E and thy right middle on I.",
		"We art in need of thy middle fingers for the letters are relentless. Useth thy left middle on M and thy right middle on C.",
		"Thy ringeth fing'r shall beest of s'rvice. Useth hath left ringeth fing'r s. Useth thy right ringeth fing'r l",
		"Thy ringeth fing'r shall beest of s'rvice. Useth hath left ringeth fing'r w. Useth thy right ringeth fing'r o",
		"Thy ringeth fing'r shall beest of s'rvice. Useth hath left ringeth fing'r x. Useth thy right ringeth fing'r p",
		"Ent'r ye olde shift key! capital lett'rs cometh! Thee must utilizeth thy left pinky",
		"Ent'r ye olde shift key! capital lett'rs cometh! Thee must utilizeth thy left pinky",
		"Ent'r ye olde shift key! capital lett'rs cometh! Thee must utilizeth thy left pinky",
		"Be of stout heart, the worst yet to come!",
		"Be of stout heart, the worst yet to come!",
		"Be of stout heart, the worst yet to come!",
		"Thy fate cometh! Numbers arriveth!",
		"Thy fate cometh! Numbers arriveth!",
		"Thy fate cometh! Numbers arriveth!",
		"Thy day is lost! Thy skills beeth no match for the symbols ",
		"Thy day is lost! Thy skills beeth no match for the symbols ",
		"Thy day is lost! Thy skills beeth no match for the symbols ",
		"Sir, thy fate shalt beest hath met. The most obscure symbols has't arriv'd",
		"Sir, thy fate shalt beest hath met. The most obscure symbols has't arriv'd",
		"Sir, thy fate shalt beest hath met. The most obscure symbols has't arriv'd",
		"Come follow me dear friends, and we shall find our goal, or else perish bravely in the charge!",
		"Come follow me dear friends, and we shall find our goal, or else perish bravely in the charge!",
		"Cometh followeth me lief friends, and we shalt findeth our goal, 'r else p'rish bravely in the chargeth!" };

public: 

	//-------------------------------------------------------------
	// Retreives the string that will appear in the text box
   // within TechGameForm
	//-------------------------------------------------------------
	string GetDougSpeech() { return dougquotes[level-1]; }

	//-------------------------------------------------------------
	// Returns level
	//-------------------------------------------------------------
	int GetLevel() { return level; }

	//-------------------------------------------------------------
	// Sets level
	//-------------------------------------------------------------
	void SetLevel(int passlevel) { level = passlevel; }

	//-------------------------------------------------------------
	// Returns the accuracy calculated
	//-------------------------------------------------------------
	double GetAcc() { return Rounding(check.CalculatePCT(numChars, mistakes), 2); }

	//-------------------------------------------------------------
	// Returns the cumulative accuracy
	//-------------------------------------------------------------
	double GetCumAcc() { return Rounding(cumulative.CalculatePCT(totalChars, totalMistakes), 2); }

	//-------------------------------------------------------------
	// Main method to play game
	//-------------------------------------------------------------
	void PlayGame();

	//-------------------------------------------------------------
	// Resets level stats and goes to next level if user passed
	//-------------------------------------------------------------
	void EndLevel();

	//-------------------------------------------------------------
	// Returns outmessage
	//-------------------------------------------------------------
	string GetOutmessage();

	//-------------------------------------------------------------
	// Checks if the typed char is matches
	//-------------------------------------------------------------
	bool TypeChar(string charTyped, string message);

	//-------------------------------------------------------------
	// Rounds a number
	//-------------------------------------------------------------
	double Rounding(double A_num, int place);

	//-------------------------------------------------------------
	// Confirms if a user has passed to the next level.
	//-------------------------------------------------------------
	bool Pass() { return cumulative.CalculatePCT(totalChars, totalMistakes) >= TARGET_ACCURACY; }

	//-------------------------------------------------------------
	// Resets numChars and numMistakes
	//-------------------------------------------------------------
	void ResetNumChars();

	//-------------------------------------------------------------
	// Resets totalChars and totalMistakes
	//-------------------------------------------------------------
	void ResetTotalChars();

};