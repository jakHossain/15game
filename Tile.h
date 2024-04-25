#ifndef TILECLASS
#define TILECLASS

#include <iostream>

class Tile
{
private:
	int m_number{};
	
public:
	explicit Tile(int number)
		: m_number{ number }
	{};

	friend std::ostream& operator<<(std::ostream& stream, const Tile& tile);
};


#endif // !TILECLASS


