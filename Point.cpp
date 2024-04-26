#include "Point.h"
#include "Direction.h"

Point Point::getAdjacentPoint(Direction::Type direction)
{
	switch (direction)
	{
	case Direction::Type::up:
		return Point{ x ,y + 1 };
	case Direction::Type::down:
		return Point{ x ,y - 1 };
	case Direction::Type::left:
		return Point{ x - 1 ,y };
	case Direction::Type::right:
		return Point{ x + 1 ,y };
	default:
		return Point{ x,y };
	}

}

std::ostream& operator<<(std::ostream& stream, const Point& p)
{
	stream << "Point(" << p.x << ", " << p.y << ")";
	return stream;
}
