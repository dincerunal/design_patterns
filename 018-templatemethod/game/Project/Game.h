#pragma once

#include <cstddef>

class Game {
public:
	Game(size_t n, size_t t = 0) 
		: numberOfPlayers(n), turn(t), currentPlayer(0)
	{}
public:
	virtual void Start() = 0;
	virtual bool HasWinner() = 0;
	virtual int GetCurrentPlayer() const = 0;
	virtual void Stop() = 0;
public:
	virtual void Run() final;
protected:
	size_t numberOfPlayers;
	mutable size_t currentPlayer;
	mutable size_t turn;
};

