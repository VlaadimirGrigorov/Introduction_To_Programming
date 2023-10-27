#include <iostream>
#include <cmath>

int main()
{
	// Задача 1: Въвежда се цяло число.Отпечатайте 1, ако числото е четно и 0, ако е нечетно.
	// Вход : 265, Изход : 0
	// Вход : 290, Изход : 1

	int num;
	std::cout << "Enter a whole number: ";
	std::cin >> num;

	bool isEven = num % 2;
	if (isEven)
	{
		std::cout << "1" << std::endl; // std::cout << isEven << std::endl;
	}
	else
	{
		std::cout << "0" << std::endl; // std::cout << isEven << std::endl;
	}
}