#include <iostream>

#include"aiPlayer.h"
#include"DrawEngine.h"
#include"field.h"
#include"game.h"
#include"humanPlayer.h"
#include"player.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	DrawEngine drawEngine;
	InputEngine inputEngine;
	drawEngine.ShowWelcomeMessage();
	Game game(drawEngine);
	game.GameStart(inputEngine.GetGameTypeFromUserInput());
}
