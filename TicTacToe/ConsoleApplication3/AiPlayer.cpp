#include <iostream>
#include <random>

#include "aiPlayer.h"
#include "player.h"


void AiPlayer::Turn()
{
	int turnRow;
	int turnColumn;

	do {
		turnRow = _rand()%3;
		turnColumn = _rand()%3;

	} while (!_field->IsCellEmpty(turnRow, turnColumn));

	_field->SetCell(turnRow, turnColumn, _symbol);
}


AiPlayer::AiPlayer(char symbol, Field *field) :Player(symbol, field)
{
}


bool AiPlayer::CheckWinner()
{
	return _field->CheckFieldForWin(_symbol);
}


void AiPlayer::ShowPlayer()
{
	std::cout << "(компьютер)" << std::endl;
}