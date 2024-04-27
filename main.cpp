#include <iostream>
#include "Tile.h"
#include "Board.h"
#include "UserInput.h"
#include "Direction.h"
#include "Point.h"

extern const int g_consoleLines{ 25 };

int main()
{
	Board b{};
	b.resetGame();
	std::cout << b;
	bool gameWon{ false };
	char input{};
	do {
		input = UserInput::getCommandFromUser();

		Direction dir{ Direction::createDirection(input)};

		if (dir.getDirection() != 4)
		{
			bool moved{ b.moveTile(dir.getDirection()) };
			if (moved)
			{
			std::cout << b;
			std::cout << "You went " << dir << "!\n";
			gameWon = b.checkWin();
			}
			else
			{
				std::cout << b;
				std::cout << "You can't move there! Try again. \n";
			}
		}


	} while (input != 'q' && !gameWon);

	if (gameWon)
	{
		std::cout << "\n\nYou won! Congrats!!";
	}



	std::cout << " Bye!!\n\n";
	return 0;


}