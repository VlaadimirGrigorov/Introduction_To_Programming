#include <iostream>

int main()
{
	int x, y;
	std::cout << "Enter first number: ";
	std::cin >> x;
	std::cout << "Enter second number: ";
	std::cin >> y;

	if (x > y)
	{
		std::cout << x << std::endl;
	}
	else
	{
		std::cout << y << std::endl;
	}

}