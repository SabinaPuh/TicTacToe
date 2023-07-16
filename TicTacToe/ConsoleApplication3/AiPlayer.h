#pragma once

#include "player.h"
#include <random>


class AiPlayer :public Player
{
	std::random_device _rand;

public:
	AiPlayer(char symbol, Field* field);

	void Turn() override;
	bool CheckWinner() override;
	void ShowPlayer() override;
};