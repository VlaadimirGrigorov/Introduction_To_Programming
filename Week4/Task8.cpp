#include <iostream>
#include <cmath>

bool areDigitsEqual(unsigned int number)
{
	int lastDigit = number % 10;
	number /= 10;

	while (number != 0)
	{
		if (lastDigit != number % 10)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	/*
	Задача 8: Напишете функция, която приема естествено число и връща дали цифрите му са еднакви.
	Вход : 111111, Изход : true
	*/

	unsigned int number1;
	std::cin >> number1;

	std::cout << "Eighth task: " << std::endl;
	std::cout << std::boolalpha << areDigitsEqual(number1) << std::endl;

	return 0;
}