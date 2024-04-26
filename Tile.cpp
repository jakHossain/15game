#include "Tile.h"
#include <iostream>


std::ostream& operator<<(std::ostream& stream, const Tile& tile)
{
	if (tile.m_number == 0)
	{
		stream << "    ";
	}
	else if (tile.m_number > 9)
	{
		stream << " " << tile.m_number << " ";
	}
	else if (tile.m_number <= 9)
	{
		stream << "  " << tile.m_number << " ";
	}

	return stream;
}