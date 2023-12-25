#include <iostream>
#include <cmath>

int main()
{
	int var;
	std::cout << "Enter a whole number: ";
	std::cin >> var;

	if (var >= 2 && var <= 6)
	{
		std::cout << "1" << std::endl;
	}
	else
	{
		std::cout << "0" << std::endl;
	}
}