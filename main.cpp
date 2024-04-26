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
	//std::cout << b;
	//char input{};
	//do {
	//	input = UserInput::getCommandFromUser();

	//	Direction dir{ Direction::randomDirection()};
	//	
	//	if (dir.getDirection() != 4)
	//	{
	//	std::cout << "You went " << dir << "\n";
	//	}


	//
	//} while (input != 'q');

	Point p { 1,1 };

	std::cout << b;
	Point emp{ b.findEmptyTile() };

	b.swapTiles(p, emp);
	std::cout << b;

	std::cout << "The empty tile is in: " << emp << "\n";

	std::cout << p << "\n";
	std::cout << p.getAdjacentPoint(Direction::left) << "\n";
	std::cout << p.getAdjacentPoint(Direction::up) << "\n";
	std::cout << p.getAdjacentPoint(Direction::right) << "\n";
	std::cout << p.getAdjacentPoint(Direction::down) << "\n";
	std::cout << "\n\nBye!!\n\n";
	return 0;


}