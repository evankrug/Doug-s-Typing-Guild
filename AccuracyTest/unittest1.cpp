#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\DougTypingGuild\Accuracy.h"
#include "..\DougTypingGuild\Accuracy.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AccuracyTest
{		
	TEST_CLASS(TestAccuracy)
	{
	public:
		
		Accuracy test;
		TEST_METHOD(CalcPCTTest)
		{
			Assert::AreEqual(90, (int)test.CalculatePCT(10,1));
			Assert::AreEqual(84, (int)test.CalculatePCT(33, 5));
			Assert::AreEqual(97, (int)test.CalculatePCT(200, 6));
			Assert::AreEqual(11, (int)test.CalculatePCT(45, 40));
			Assert::AreEqual(78, (int)test.CalculatePCT(32, 7));
			Assert::AreEqual(0, (int)test.CalculatePCT(0, 10));
			Assert::AreEqual(100, (int)test.CalculatePCT(13, 0));
			Assert::AreEqual(0, (int)test.CalculatePCT(0, 0));
			Assert::AreEqual(0, (int)test.CalculatePCT(5, -1));
			Assert::AreEqual(0, (int)test.CalculatePCT(-1, 10));

		}
		//	Accuracy test;
		//	cout << test.CalculatePCT(10, 1) << endl;
		//	cout << test.CalculatePCT(33, 5) << endl;
		//	cout << test.CalculatePCT(200, 6) << endl;
		//	cout << test.CalculatePCT(45, 40) << endl;
		//	cout << test.CalculatePCT(32, 7) << endl;
		//	//Output should be:
		//	//90
		//	//84.8484
		//	//97
		//	//11.1111
		//	//78.125
	};
}