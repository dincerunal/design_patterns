#include "Game.h"

#include <iostream>

using namespace std;


void Game::Run()
{
	Start();

	while (!HasWinner()) {
		size_t currentPlayer = GetCurrentPlayer();
		cout << "Player " << currentPlayer <<  endl;
	}

	cout << "Player:" << GetCurrentPlayer() << " win" << endl;

	Stop();	
}


