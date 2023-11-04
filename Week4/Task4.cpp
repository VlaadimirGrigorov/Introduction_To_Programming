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

int concatenation(unsigned int x, unsigned int y)
{
	if (x == 0)
	{
		return 0;
	}

	int digits = countDigits(y);
	int power = pow(10, digits);
	
	return x * power + y;
}

int main()
{
	/*
	Задача 4: Да се напише функция, която приема две естествени числа и връща ново число, което е тяхната конкатенация.
	Вход : 19 32, Изход : 1932
	*/

	unsigned x, y;
	std::cin >> x >> y;

	std::cout << concatenation(x, y) << std::endl;

	return 0;
}