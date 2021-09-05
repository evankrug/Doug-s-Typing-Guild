#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Knight.h"
#include "..\Knight.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KnightTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMove)
		{
			Knight test(500, 1);
			Assert::AreEqual(5, test.Movement(0));
			Assert::AreEqual(23, test.Movement(18));
		}
		TEST_METHOD(TestGetSpeed)
		{
			Knight test(500, 1);
			Assert::AreEqual(500, test.getSpeed());
			Knight test2(500, 2);
			Assert::AreEqual(495, test2.getSpeed());
			Knight test3(500, 3);
			Assert::AreEqual(490, test3.getSpeed());
			Knight test4(500, 4);
			Assert::AreEqual(485, test4.getSpeed());
			Knight test5(500, 5);
			Assert::AreEqual(480, test5.getSpeed());
		}

	};
}