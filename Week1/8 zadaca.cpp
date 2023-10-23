#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 8: Въвеждат се две числа.Да се отпечата по - голямото от двете.
	Вход : 265, 44, Изход : 265
	*/

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