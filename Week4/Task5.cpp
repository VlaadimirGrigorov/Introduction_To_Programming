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

int reversedContatenation(unsigned int n)
{
	int reversed = reverse(n);

	int digits = countDigits(n);
	int power = pow(10, digits);

	return reversed * power + n;
}

int main()
{
	/*
	Задача 5: Напишете функция, която дадено по подадено естествено число N, връща число, което е резултат от конкатенацията на обърнатото число на N с подаденото N.
	Вход : 1234 Изход : 43211234
	*/

	int num;
	std::cin >> num;

	std::cout << reversedContatenation(num) << std::endl;

	return 0;
}