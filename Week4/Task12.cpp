#include <iostream>
#include <cmath>

int digit(char symbol)
{
	if (symbol >= '0' && symbol <= '9')
	{
		return symbol - '0';
	}

	return -1;
}

int main()
{
	//Задача 12: Напишете функция, която приема символ и ако символът е цифра, да върне съответната цифра.Ако символът не е цифра, то да върне - 1
	//Вход : '7', Изход : 7
	//Вход : '!', Изход : -1 //или грешка

	char symbol2;
	std::cin >> symbol2;

	std::cout << digit(symbol2) << std::endl;

	return 0;
}