#ifndef USERINPUTGUARD
#define USERINPUTGUARD

#include <iostream>
#include <limits>

namespace UserInput
{
	void cleanInput()
	{
		std::cout << "Invalid! Try again.\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	char getCommandFromUser()
	{
		while (true)
		{
			std::cout << "Enter w,a,s, or d to move the blank space. Or q to quit: ";
			char input{};
			std::cin >> input;


			if (!std::cin)
			{
				cleanInput();
				continue;
			}

			switch (input)
			{
			case 'w':
			case 'a':
			case 'd':
			case 's':
			case 'q':
				return input;
			default:
				cleanInput();
				continue;
			}
		}

	}
}

#endif // !USERINPUTGUARD
