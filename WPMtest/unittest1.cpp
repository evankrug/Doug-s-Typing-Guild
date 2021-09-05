#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\DougTypingGuild\WPM.h"
#include "..\DougTypingGuild\WPM.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace WPMtest
{		
	TEST_CLASS(WPMtest)
	{
	public:
		
		TEST_METHOD(getNumTest)
		{
			WPM test;
			Assert::AreEqual(0, test.GetNum());
		}

		TEST_METHOD(UpdateTest)
		{
			WPM test;
			test.Update(0, 0, 0);
			Assert::AreEqual(0, test.GetNum());
			test.Update(0, 0, 1);
			Assert::AreEqual(0, test.GetNum());
			test.Update(1, 0, 0);
			Assert::AreEqual(0, test.GetNum());
			test.Update(62, 15, 45);
			Assert::AreEqual(21, test.GetNum());
			test.Update(-1, 15, 6);
			Assert::AreEqual(0, test.GetNum());
			test.Update(15, -5, 62);
			Assert::AreEqual(0, test.GetNum());
			test.Update(11, 45, -6);
			Assert::AreEqual(0, test.GetNum());
		    test.Update(0, 45, 0);
			Assert::AreEqual(0, test.GetNum());
			test.Update(0, 45, 62);
			Assert::AreEqual(0, test.GetNum());
			test.Update(15, 3, 0);
			Assert::AreEqual(0, test.GetNum());
			test.Update(12, 0, 10);
			Assert::AreEqual(6, test.GetNum());
		}
		TEST_METHOD(CalcAvgTest)
		{
			WPM test;
			Assert::AreEqual(5, (int)test.CalculateAvg(10, 1));
			Assert::AreEqual(0, (int)test.CalculateAvg(0, 0));
		}
	};
}