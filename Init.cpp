#include "Init.h"
#include <iostream>
#include "Global.h"


void Init()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	for (int I = 0; I < NUMBER; ++I)
	{
		Deck[I] = I;
	}
}
