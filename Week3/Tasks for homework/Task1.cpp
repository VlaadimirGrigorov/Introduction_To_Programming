#include <iostream>

int main()
{
	/*
	Задача 1: Да се напише програма, която приема поток от числа.Числата се събират, докато не се въведе числото 0. Тогава трябва да се отпечата акумулираният резултат и да
	програмата да приключи.
	Вход : 1 2 3 4 5 6 0, Изход : 21
	Вход : 9 9 1 0, Изход : 19
	Вход : 5 4 3 0 Изход : 12
	*/

	int number, sum = 0;
	do
	{
		std::cout << "Enter a number different than zero: ";
		std::cin >> number;
		if (number != 0)
		{
			sum += number;
		}
	} while (number != 0);

	return 0;
}