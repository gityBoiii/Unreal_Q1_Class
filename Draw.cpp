#include "Draw.h"
#include <iostream>
#include "Global.h"

using namespace std;


void Draw()
{
	for (int I = 0; I < 4; ++I)
	{
		int Portion = Deck[I] / 13; //Card Type
		int Reminder = (Deck[I] % 13); //Card Number

		switch (Portion)
		{
		case 0:
			cout << "Heart" << " ";
			break;
		case 1:
			cout << "Spade" << " ";
			break;
		case 2:
			cout << "Diamond" << " ";
			break;
		case 3:
			cout << "Clover" << " ";
			break;
		}

		if (Reminder == 1)
		{
			cout << "A" << endl;
		}
		else if (Reminder == 11)
		{
			cout << "J" << endl;
		}
		else if (Reminder == 12)
		{
			cout << "Q" << endl;
		}
		else if (Reminder == 13)
		{
			cout << "K" << endl;
		}
		else
		{
			cout << Reminder << endl;
		}

	}
}