#include <iostream>
#include "Tile.h"
#include "Board.h"

extern const int g_consoleLines{ 25 };

int main()
{
	Board b{};
	Tile t{ 12 };
	Tile t2{ 10 };
	Tile t3{ 3 };
	Tile t0{ 0 };
	std::cout << "123456789ABCDEF\n";
	std::cout << t0 << t << t2 << t3 <<  "\n";

	std::cout << "Tile one has the number: " << t.getNum() << "\n";

	std::cout << b;

}