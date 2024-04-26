#include "Board.h"
#include "Point.h"
#include <iostream>

extern const int g_consoleLines;

std::ostream& operator<<(std::ostream& stream, const Board& b)
{
	b.printEmptyLines(g_consoleLines);
	for (int i{ 0 }; i < 4; ++i)
	{
		for (int j{ 0 }; j < 4; ++j)
		{
			stream << b.m_board[i][j];
		}
		stream << "\n";
	}

	return stream;
}

Point Board::findEmptyTile()
{
	for (int row{ 0 }; row < Board::SIZE; ++row)
	{
		for (int column{ 0 }; column < Board::SIZE; ++column)
		{
			if (m_board[row][column].isEmpty())
			{
				return Point{ column, row };
			}
		}
	}

	return Point{ -1,-1 };
}

bool Board::checkIfValidTile(const Point& p) const
{
	return (p.x >= 0 && p.x < Board::SIZE) && (p.y >= 0 && p.y < Board::SIZE);
}

Tile& Board::getTile(int row, int col) 
{
	return m_board[row][col];
}

void Board::swapTiles(const Point& p1, const Point& p2)
{
	if (!(checkIfValidTile(p1) == true && checkIfValidTile(p2) == true))
	{
		std::cout << "Invalid tiles";
		return;
	}

	Tile& p1Tile{ getTile(p1.y, p1.x) };
	Tile& p2Tile{ getTile(p2.y, p2.x) };

	int tempTileNum{ p1Tile.getNum() };

	p1Tile.setNum(p2Tile.getNum());
	p2Tile.setNum(tempTileNum);

}
