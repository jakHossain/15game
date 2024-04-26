#ifndef DIRECTIONCLASS
#define DIRECTIONCLASS

#include <iostream>
#include <cassert>
#include "Random.h"


class Direction
{

public:
	enum Type
	{
		up,
		down,
		right,
		left,
		max_directions
	};

private:
	Type m_direction;

public:
	explicit Direction(Type dir)
		: m_direction{ dir }
	{}

	static Direction randomDirection()
	{
		int randInt{ Random::get(0,3) };

		return Direction{ static_cast<Type>(randInt) };
	}

	static Direction createDirection(char input)
	{
		switch (input)
		{
		case 'w':
			return Direction{ Type::up};
		case 's':
			return Direction{ Type::down };
		case 'd':
			return Direction{ Type::right };
		case 'a':
			return Direction{ Type::left };
		default:
			return Direction{ Type::max_directions };
		}
	}

	Type getDirection() { return m_direction; }


	Direction operator-(const Direction& dir);

	friend std::ostream& operator<<(std::ostream& stream, const Direction& dir);

};

#endif // !DIRECTIONCLASS
