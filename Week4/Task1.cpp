#include <iostream>
#include <cmath>

int modul(int number)
{
	return abs(number);
}

int main()
{
	/*
	Задача 1: Напишете функция, която приема цяло число и връща модула му.
	Вход : 4, Изход : 4
	Вход : -4, Изход : 4
	*/

	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	std::cout << modul(number) << std::endl;

	return 0;
}