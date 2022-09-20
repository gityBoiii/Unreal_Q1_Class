#include "Shuffle.h"
#include <iostream>
#include "Global.h"


void Shuffle()
{
	for (int I = 0; I < NUMBER * 3; ++I)
	{
		int First = rand() % NUMBER;
		int Second = rand() % NUMBER;

		int Temp = Deck[First];
		Deck[First] = Deck[Second];
		Deck[Second] = Temp;
	}
}
