#include "stdafx.h"
#include "CppUnitTest.h"
#include "../DougTypingGuild/PlaySpeedGame.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SpeedGameTest
{		
	TEST_CLASS(PlaySpeedGame)
	{
	public:
		
		TEST_METHOD(getLevel)
		{
			PlaySpeedGame *game = new PlaySpeedGame();
			int level = game->getLevel();
			Assert(level == 1);
		
		}

	};
}