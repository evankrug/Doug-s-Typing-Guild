#include "stdafx.h"
#include "CppUnitTest.h"
//#include "..\DougTypingGuild\PlayReactGame.h"
//#include "..\DougTypingGuild\PlayReactGame.cpp"
//#include "..\DougTypingGuild\DatabaseManager.h"
//#include "..\DougTypingGuild\WPM.h"
//#include "..\DougTypingGuild\Popup.h"
//#include "..\DougTypingGuild\DatabaseManager.cpp"
//#include "..\DougTypingGuild\WPM.cpp"
//#include "..\DougTypingGuild\Popup.cpp"
#include <sstream>
//
//
//using namespace Microsoft::VisualStudio::CppUnitTestFramework;
//
//namespace ReactGameTest
//{		
//	TEST_CLASS(TestReactGame)
//	{
//	public:
//		
//		TEST_METHOD(TextRelocation)
//		{
//			// TODO: Your test code here
//			PlayReactGame *game = new PlayReactGame();
//			int x = 5;
//		    int y = 3;
//			game->ChangeTextLocation(x, y);
//			Assert::AreNotEqual(x, 5);
//			Assert::AreNotEqual(y, 3);
//			
//
//		}
//
//		TEST_METHOD(GetLevel)
//		{
//			// TODO: Your test code here
//			PlayReactGame *game = new PlayReactGame();
//			Assert::AreEqual(game->GetLevel(), 1);
//			
//		}
//
//		TEST_METHOD(PauseGame)
//		{
//			PlayReactGame *game = new PlayReactGame();
//			Assert::IsFalse(game->PauseGame());
//			
//		}
//		TEST_METHOD(EndLevel)
//		{
//			PlayReactGame *game = new PlayReactGame();
//			game->EndLevel();
//			Assert::AreEqual(game->GetTicks(), 0);
//			Assert::AreEqual(game->GetWordCount, 0);
//			Assert::AreEqual(game->GetNumPops(), 0);
//		}
//
//		TEST_METHOD(IncreaseTicks)
//		{
//			PlayReactGame *game = new PlayReactGame();	
//			game->IncrTicks();
//			Assert::AreEqual(game->GetTicks(), 1);
//			game->IncrTicks();
//			Assert::AreEqual(game->GetTicks(), 2);
//		}
//
//		TEST_METHOD(Popups)
//		{
//			PlayReactGame *game = new PlayReactGame();
//			game->SetPopups("Gorilla");
//			Assert::AreEqual(game->GetNumPops(), 1);
//			Assert(game->GetPops(0) == (* new Popup("Gorilla")));
//			Assert::IsFalse(game->CountPops());
//			game->SetPopups("Word2");
//			game->SetPopups("Word3");
//			Assert::IsTrue(game->CountPops());
//			Assert::IsTrue(game->SearchWords("Gorilla"));
//			Assert::IsTrue(game->SearchWords("Word3"));
//			Assert::IsFalse(game->SearchWords("Giraffe"));
//			game->DecPops();
//			Assert::IsFalse(game->CountPops());
//		}
//
//		TEST_METHOD(Level)
//		{
//			PlayReactGame *game = new PlayReactGame();
//			Assert::AreEqual(game->GetPopInterval(), 2000);
//			game->SetLevel(2);
//			Assert::AreEqual(game->GetPopInterval(), 1750);
//			game->SetLevel(3);
//			Assert::AreEqual(game->GetPopInterval(), 1500);
//			game->SetLevel(4);
//			Assert::AreEqual(game->GetPopInterval(), 1250);
//			game->SetLevel(5);
//			Assert::AreEqual(game->GetPopInterval(), 1000);
//			game->SetLevel(10);
//			Assert::AreEqual(game->GetPopInterval(), 1000);
//		}
//
//		TEST_METHOD(Count)
//		{
//			PlayReactGame *game = new PlayReactGame();
//			Assert::AreEqual(game->GetWordCount, 0);
//			Assert::AreEqual(game->GetCharCount, 0);
//			game->CountWords();
//			Assert::AreEqual(game->GetWordCount, 1);
//			game->CountWords();
//			game->CountWords();
//			Assert::AreEqual(game->GetWordCount, 3);
//			game->CountChars();
//			game->CountChars();
//			Assert::AreEqual(game->GetCharCount, 2);
//			game->CountChars();
//			game->CountChars();
//			game->CountChars();
//			Assert::AreEqual(game->GetCharCount, 5);
//		}
//
//
//	};
//}