#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\DougTypingGuild\History.h"
#include "..\DougTypingGuild\History.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;



//class TestCommand : public Command
//{
//public:
//	TestCommand()
//	{
//		num = 0;
//	}
//	int num;
//	void execute() override
//	{
//		num++;
//	}
//	void unexecute() override
//	{
//		num--;
//	}
//};


namespace HistoryTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		History test;
		TEST_METHOD(DoCommandTest)
		{
			
			/*TestCommand * cmd = new TestCommand();
			test.doCommand(cmd);
			Assert::AreEqual(1, cmd->num);
			test.undoCommand();
			Assert::AreEqual(0, cmd->num);
			test.redoCommand();
			Assert::AreEqual(1, cmd->num);
			test.redoCommand();
			Assert::AreEqual(1, cmd->num);
			test.undoCommand();
			test.undoCommand();
			Assert::AreEqual(0, cmd->num);*/
		}

	};
}