#include <iostream>
#include "../include/BaseballGame.h"

using namespace std;

int main()
{
	BaseballGame game;

	while (!game.isGameDone()) {
		game.initialize();
		
		while (game.getNumberofStrike() < 3) {
			game.input();
			game.judge();
			game.output();
		}
	}
	return 0;
}