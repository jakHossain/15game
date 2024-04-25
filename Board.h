#ifndef BOARDCLASS
#define BOARDCLASS
#include "Tile.h"
#include <iostream>

class Board
{
private:
	static constexpr int SIZE{ 4 };
	Tile m_board[SIZE][SIZE]{
		{ Tile{1}, Tile{2}, Tile{3}, Tile{4} },
		{ Tile{5}, Tile{6}, Tile{7}, Tile{8} },
		{ Tile{9}, Tile{10}, Tile{11}, Tile{12} },
		{ Tile{13}, Tile{14}, Tile{15}, Tile{0} }
	};

public:
	Board() = default;

	static void printEmptyLines(int lines)
	{
		for (int i{ 0 }; i < lines; ++i)
		{
			std::cout << "\n";
		}
	}

	friend std::ostream& operator<<(std::ostream& stream, const Board& b);
};

#endif // !BOARDCLASS
