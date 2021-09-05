#include "PlaySpeedGame.h"
#include <assert.h>


bool PlaySpeedGame::PauseGame()
{
	return false;
}

void PlaySpeedGame::PlayLevel(int level)
{
	wordsInUse = dm->getWordList(level);
	availableWords = wordsInUse.size();
	lineLength = rand() % MAX_LINE_LENGTH + MIN_LINE_LENGTH;
}

int PlaySpeedGame::BackKnight()
{
	return 20;
}

int PlaySpeedGame::GetLevel()
{
	return level;
}

void PlaySpeedGame::EndLevel()
{

}

int PlaySpeedGame::IncrTicks()
{
	ticks++;
	wpm.Update(charCount, wordCount, ticks);
	return wpm.GetNum();
}

string PlaySpeedGame::GetWord()
{
	lineLength = rand() % availableWords;
	return wordsInUse.at(lineLength);
}

void PlaySpeedGame::undo(int kl, int dl)
{
	//UndoSpeedGame undogame(kl,dl,charCount,wordCount,ticks,history);	  
}
void PlaySpeedGame::redo()
{
	//RedoSpeedGame  *redogame = new RedoSpeedGame(history);
	//redogame->command();
	//wordCount = redogame->getwc();
	//knightLength = redogame->getkl();
	//dougLength = redogame->getdl();
	//ticks = redogame->gett();
	//charCount = redogame->getcc();
}


/*

void main()
{
PlaySpeedGame * p = new PlaySpeedGame();

p->increaseLevel();
assert(p->getLevel() == 2);

p->increaseLevel();
assert(p->getLevel() == 3);

assert(p->pauseGame() == false);

assert(p->backKnight() == 20);

p->countWords();
assert(p->getWordCount() == 1);
p->countWords();
assert(p->getWordCount() == 2);

assert(p->incrTicks() == 120);
assert(p->getTicks() == 1);

cout << p->getWord() << endl;



}
*/
