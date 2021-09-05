

#include "Popup.h"


Popup::Popup(string w)
{
	word = w;
}


bool Popup::IsActive()
{
	if (ticks < 500)
	{
		return true;
	}
	return false;
}

void Popup::IncrTicks()
{
	ticks++;
}


