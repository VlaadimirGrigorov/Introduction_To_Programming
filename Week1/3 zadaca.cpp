#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 3: Въвежа се символ.Да се отпечата 1, ако е английска гласна буква, и 0, ако не е.
	Вход : а, Изход : 1
	Вход : Е, Изход : 1
	Вход : В, Изход : 0
	*/

	char symbol;
	std::cout << "Enter a symbol: ";
	std::cin >> symbol;

	if (symbol == 'A' || symbol == 'E' || symbol == 'I' || symbol == 'O' || symbol == 'U')
	{
		std::cout << "1" << std::endl;
	}
	else
	{
		std::cout << "0" << std::endl;
	}
}