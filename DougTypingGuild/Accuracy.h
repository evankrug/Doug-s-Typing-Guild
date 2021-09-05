#pragma once

#include <iostream>
using namespace std;
class Accuracy
{
private:
	int numChar;
	int mistakes;
	double pct;

public:

	//------------------------------------------------------
	// Calculates accuracy percentage for typing
	//--------------------------------------------------
	double CalculatePCT(int numChar, int mistakes);
};