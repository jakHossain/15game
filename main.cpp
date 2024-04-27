#include <iostream>
#include "Tile.h"
#include "Board.h"
#include "UserInput.h"
#include "Direction.h"
#include "Point.h"


void printWelcomeMessage() 
{
	std::cout << "\nWelcome to Console 15 Puzzle!\n";
	std::cout << "The goal is to put the numbers in the 4x4 grid below in order from 1 to 15.\n"
		<< "The blank space should also be the bottom right corner to win the game.\n"
		<< "You can control the position of the blank space by press W, A, S, or D and pressing enter.\n"
		<< "Enter q to quit the game.\n";
}

int main()
{
	printWelcomeMessage();
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