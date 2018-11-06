////////////////////////////////////////////////////////////////////////
// OOP Tutorial 7: Simple C++ OO program to simulate a simple Dice Game (single file)
////////////////////////////////////////////////////////////////////////

//--------include libraries
#include <ctime>
#include <iostream>
#include <string>	

//header files....
#include "Player.h"
#include "Dice.h"
#include "Game.h"
#include "RandomNumberGenerator.h"
#include "Score.h"

using namespace std;


//---------------------------------------------------------------------------
//with two dices
int main()
{
	Player player;
	Game twoDiceGame(&player);
	cout << "\n________________________";
	cout << "\nGame starting...";
	twoDiceGame.displayData();
	cout << "\n________________________";
	twoDiceGame.run();
	cout << "\n________________________";
	cout << "\nGame ended...";
	twoDiceGame.displayData();
	cout << "\n________________________\n";

	system("pause");
	return 0;
}

