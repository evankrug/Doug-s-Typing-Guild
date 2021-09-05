
#include "PlayTechGame.h"


void PlayTechGame::PlayGame()
{
 	charsInUse = dm->getCharList(level);
   availableChars = charsInUse.size();
	lineLength = rand() % MAX_LINE_LENGTH + MIN_LINE_LENGTH;
}

void PlayTechGame::EndLevel()
{
	if (Pass())
	{
		if (level == 27)
			return;
		else
			level++;
	}
	mistakes = 0;
	numChars = 0;
	totalMistakes = 0;
	totalChars = 0;
	
}

bool PlayTechGame::TypeChar(string charTyped, string message)
{
	if (charTyped[numChars] == message[numChars])
	{
		numChars++;
		totalChars++;
	}
	else
	{
		numChars++;
		totalChars++;
		mistakes++;
		totalMistakes++;
	}
	if (numChars == message.length())
	{
		return true;
	}
	return false;
}

string PlayTechGame::GetOutmessage()
{
	string target;
	for (int i = 0; i < lineLength; i++) //This for loop breaks for some reason after one iteration
	{
		
		int index = rand() % availableChars;
		if (index == 0)
		{
			target = target + " ";
		}
			
		else
		{
			mychar = charsInUse.at(rand() % availableChars); //get random char from available chars in vector
			target = target + mychar;
		}
	}
	return target;
}

double PlayTechGame::Rounding(double A_num, int place)
{
	int factor = 1;
	for (int i = 0; i < place; i++)
	{

		factor *= 10;
	}
	return floor(A_num * factor + 0.5) / factor;
}
void PlayTechGame::ResetNumChars()
{
	numChars = 0;
	mistakes = 0;
}

void PlayTechGame::ResetTotalChars()
{
	totalMistakes = 0;
	totalChars = 0;
}
