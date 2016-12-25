//использование const функции int getVersion() const;
//применение mutable int version;

#pragma once
#include "Game.h"

class Minesweeper : public Game {
	mutable int version;
public:
	Minesweeper(int version);
	int getVersion() const;
	void setVersion(int newVersion);
	void print();
};