#include <iostream>
#include <cmath>

int countDigits(int number)
{
	int counter = 0;

	while (number != 0)
	{
		counter++;
		number /= 10;
	}

	return counter;
}

int main()
{
	/*
	Задача 2: Напишете функция, която приема цяло число и връща броя на цифрите му.
	Вход : 4, Изход : 1
	Вход : -4, Изход : 1
	Вход : 5430 Изход : 4
	*/
	
	int number;
	std::cin >> number;

	std::cout << countDigits(number) << std::endl;


	return 0;
}