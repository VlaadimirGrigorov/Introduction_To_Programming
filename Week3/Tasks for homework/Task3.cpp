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

int reverse(int number)
{
	int reverse = 0;

	while (number != 0)
	{
		(reverse *= 10) += number % 10;
		number /= 10;
	}

	return reverse;
}

int main()
{
	/*
	Задача 3: Да се напише програма, която приема число и премахва среднaта цифра, ако числото има нечетен брой цифри или премахва средните две цифри, ако числото има четен
	брой цифри.След това да се отпечата числото увеличено с 1 - ца.
	Вход: 1234, Изход: 14, 15
	Вход: 123 Изход: 13, 14
	Вход: 51234 Изход: 5134, 5135
	Вход: 5 Изход: 0, 1
	*/

	int num; // 123
	std::cout << "Enter a whole number: ";
	std::cin >> num;
	int digits = countDigits(num);

	// check if digits are even or odd (separate cases)
	if (digits % 2 == 1)
	{
		// first while loop is to get to the middle digit
		int i = 0, newNumber = 0; // newNumber is the number with removed middle digit
		while (i != digits / 2) // the goal is for i to get to the digits / 2 (middle digit)
		{
			(newNumber *= 10) += num % 10;
			num /= 10;
			i++;
		}

		num /= 10;
		
		// second while loop is to collect other digits after removed middle digit
		while (num != 0)
		{
			(newNumber *= 10) += num % 10;
			num /= 10;
		}

		std::cout << reverse(newNumber) << ", " << reverse(newNumber) + 1 << std::endl;
	}
	else
	{
		// first while loop is to get to the middle digit
		int i = 0, newNumber = 0; // newNumber is the number with removed middle digit
		while (i != digits / 2 - 1) // the goal is for i to get to the digits / 2 (middle digit)
		{
			(newNumber *= 10) += num % 10;
			num /= 10;
			i++;
		}

		num /= 100;

		// second while loop is to collect other digits after removed middle digit
		while (num != 0)
		{
			(newNumber *= 10) += num % 10;
			num /= 10;
		}

		std::cout << reverse(newNumber) << ", " << reverse(newNumber) + 1 << std::endl;
	}

	return 0;
}