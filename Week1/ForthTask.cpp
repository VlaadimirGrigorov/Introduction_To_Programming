#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 4: Въвежа се цяло число.Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна.
	Вход : 5, Изход : 1
	Вход : 3, Изход : 1
	Вход : 9, Изход : 0
	*/

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