
#include "Accuracy.h"





	double Accuracy::CalculatePCT(int numChar, int mistakes)
	{
		if (numChar == 0)
		{
			return 0;
		}
		else if (numChar < 0 || mistakes < 0)
		{
			return 0;
		}
		else
		{
			double negPCT = mistakes / double(numChar);
			pct = 1 - negPCT;
			return pct * 100;
		}		
	}


	
	//void main()
	//{
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

	//	system("pause");
	//}
	//
