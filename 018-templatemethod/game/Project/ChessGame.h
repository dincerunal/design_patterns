#pragma once

#include "Game.h"

class ChessGame : public Game {
public:
	using Game::Game;
public:
	void Start() override;
	bool HasWinner() override;
	int GetCurrentPlayer() const override;
	void Stop() override;
private:
	size_t count = 10;	
};

