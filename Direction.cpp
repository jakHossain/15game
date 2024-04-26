#include "Direction.h"
#include <iostream>

Direction Direction::operator-(const Direction& dir)
{
	switch (dir.m_direction)
	{
	case Type::up:
		return Direction{ Type::down };
	case Type::down:
		return Direction{ Type::up };
	case Type::right:
		return Direction{ Type::left };
	case Type::left:
		return Direction{ Type::right};
	default:
		std::cout << "Invalid direction";
		return Direction{ static_cast<Type>(4) };

	}
}

std::ostream& operator<<(std::ostream& stream, const Direction& dir)
{
	switch (dir.m_direction)
	{
	case Direction::Type::up:
		stream << "up";
		break;
	case Direction::Type::down:
		stream << "down";
		break;
	case Direction::Type::right:
		stream << "right";
		break;
	case Direction::Type::left:
		stream << "left";
		break;
	default:
		break;

	}

	return stream;
}
