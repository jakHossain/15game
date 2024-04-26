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

	int getNum() const { return m_number; }

	void setNum(int num) { m_number = num; }

	bool isEmpty() const { return m_number == 0; }


	friend std::ostream& operator<<(std::ostream& stream, const Tile& tile);
};


#endif // !TILECLASS


