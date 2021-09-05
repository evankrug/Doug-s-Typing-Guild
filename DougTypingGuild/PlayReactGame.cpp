
#include "PlayReactGame.h"
#include <assert.h>



void PlayReactGame::PlayLevel(int level)
{
	wordsInUse = dm->getWordList(level);
	availableWords = wordsInUse.size();
	lineLength = rand() % MAX_LINE_LENGTH + MIN_LINE_LENGTH;
}


void PlayReactGame::EndLevel()
{
	wordCount = 0;
	ticks = 0;
	numPops = 0;
}

void PlayReactGame::ChangeTextLocation(int & xLoc, int & yLoc)
{
	int newX = rand() % RIGHT_LIMIT;
	if (newX < LEFT_LIMIT)
		newX = LEFT_LIMIT;
	int newY = rand() % LOWER_LIMIT;
	if (newX < UPPER_LIMIT)
		newX = UPPER_LIMIT;

	xLoc = newX;
	yLoc = newY;
	
}


int PlayReactGame::IncrTicks()
{
	ticks++;
	wpm.Update(charCount, wordCount, ticks);
	return wpm.GetNum();
}


string PlayReactGame::GetWord()
{
	lineLength = rand() % availableWords;
	return wordsInUse.at(lineLength);
}


void PlayReactGame::SetPopups(string w)
{
	pops[numPops] = new Popup(w);
	numPops++;
}

bool PlayReactGame::CountPops()
{
	if (numPops >= MAX_POPUPS)
	{
		return true;
	}
	else
		return false;
}
bool PlayReactGame::SearchWords(string word)
{
	for (int i = 0; i < numPops; i++)
	{
		if (pops[i]->GetPop() == word)
		{
			pops[i] = pops[numPops - 1];
			return true;
		}			
	}
	return false;
}

int PlayReactGame::GetPopInterval()
{
	if (level == 1)
	{
		return 2000;
	}
	else if (level == 2)
	{
		return 1750;
	}
	else if (level == 3)
	{
		return 1500;
	}
	else if (level == 4)
	{
		return 1250;
	}
	else
	{
		return 1000;
	}
}