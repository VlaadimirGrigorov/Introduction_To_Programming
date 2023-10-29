#include <iostream>
#include <cmath>

bool isPrime(int number)
{
	double temp = sqrt(number);

	if (number <= 1)
	{
		return false;
	}

	for (int i = 2; i <= temp; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}

int primeDivisors(unsigned int n)
{
	int counter = 0;

	for (int i = 2; i <= n; i++)
	{
		if (isPrime(i))
		{
			if (n % i == 0)
			{
				counter++;
			}
		}
	}

	return counter;
}

int primeDivisorsDifferentThanK(unsigned int a, unsigned int b, unsigned int k)
{
	int counter = 0;

	for (int i = a; i <= b; i++)
	{
		if (primeDivisors(i) == k)
		{
			counter++;
		}
	}

	return counter;
}

int main()
{
	/*
	6: Да се напише функция, която приема три естествени числа a и b и k и връща броя на числата в интервата[a...b], които имат точно k различни прости делитела.
	Вход : 19 32 3, Изход : 1
	Вход : 19 42 3, Изход : 2
	*/

	unsigned int a, b, k;
	std::cin >> a >> b >> k;

	std::cout << primeDivisorsDifferentThanK(a, b, k) << std::endl;

	return 0;
}