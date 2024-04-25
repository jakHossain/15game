#include <iostream>
#include "Tile.h"
#include "Board.h"
#include "UserInput.h"

extern const int g_consoleLines{ 25 };

int main()
{
	Board b{};
	std::cout << b;
	char input{};
	do {

	input = UserInput::getCommandFromUser();
	std::cout << "You entered: " << input << "\n";
	} while (input != 'q');

	std::cout << "\n\nBye!!\n\n";
	return 0;


}