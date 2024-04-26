#ifndef BOARDCLASS
#define BOARDCLASS
#include "Tile.h"
#include <iostream>
#include "Point.h"

class Board
{

public:
	static constexpr int SIZE{ 4 };


private:
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

	Point findEmptyTile();

	Tile& getTile(int row, int col);

	bool checkIfValidTile(const Point& p) const;

	void swapTiles(const Point& p1, const Point& p2);



	friend std::ostream& operator<<(std::ostream& stream, const Board& b);
};

#endif // !BOARDCLASS
