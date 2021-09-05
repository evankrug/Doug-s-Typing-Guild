

#include "WPM.h"

WPM::WPM()
{
	num = 0;
}
void WPM::Update(int chars, int words, int count)
{
	if (chars < 0 || words < 0 || count < 0)
	{
		num = 0;
	}
	else
	{
		double min = double(count) / COUNT_IN_MINUTES;
		double avgChars = CalculateAvg(chars, words);
		double adjustedWords = chars / avgChars;
		if (min == 0 || avgChars == 0)
		{
			num = 0;
		}
		else
			num = adjustedWords / min;
	}
	
	
}

double WPM::CalculateAvg(int chars, int words)
{
	return double(chars) / (words + 1);
}


