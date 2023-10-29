#include <iostream>
#include <cmath>

bool isAscending(unsigned int number)
{
	while (number > 10)
	{
		bool flag = false;
		int lastDigit = number % 10;
		int beforeLast = (number / 10) % 10;
		if (lastDigit > beforeLast)
		{
			flag = true;
		}

		if (!flag)
		{
			return false;
		}
		number /= 10;
	}

	return true;
}

bool isDescending(unsigned int number)
{
	while (number > 10)
	{
		bool flag = false;
		int lastDigit = number % 10;
		int beforeLast = (number / 10) % 10;
		if (lastDigit < beforeLast)
		{
			flag = true;
		}

		if (!flag)
		{
			return false;
		}
		number /= 10;
	}

	return true;
}

bool isSorted(unsigned int number)
{
	return isAscending(number) || isDescending(number);
}

int main()
{	/*
	Задача 7: Напишете функция, която приема естествено число и връща дали цифрите му са сортирани(във възходящ или в низходящ ред).
	Вход : 122239, Изход : true
	*/

	int num;
	std::cin >> num;

	std::cout << std::boolalpha << isSorted(num) << std::endl;

	return 0;
}