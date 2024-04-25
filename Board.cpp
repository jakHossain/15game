#include "Board.h"
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