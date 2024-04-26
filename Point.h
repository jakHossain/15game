#ifndef POINTSTRUCT
#define POINTSTRUCT
#include "Direction.h"

struct Point
{
	int x{};
	int y{};

	explicit Point(int input_x, int input_y)
		: x{input_x}
		, y{input_y}
	{
	}

	Point getAdjacentPoint(Direction::Type direction);

	friend bool operator==(const Point& p1, const Point& p2)
	{
		return (p1.x == p2.x) && (p1.y == p2.y);
	}

	friend bool operator!=(const Point& p1, const Point& p2)
	{
		return !(p1 == p2);
	}

	friend std::ostream& operator<<(std::ostream& stream, const Point& p);


};

#endif // !POINTSTRUCT
