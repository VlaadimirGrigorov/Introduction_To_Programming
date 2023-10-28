#include <iostream>

bool isPrimeNumber(int n)
{
	double temp = sqrt(n);
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i <= temp; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	/*
	Задача 4: Да се напише програма, която приема 2 числa - a и b и отпечатва всички прости числа в интервала[a, b].
	Вход : 10 20, Изход : 11 13 17 19
	Вход : 20 1, Изход :
	Вход : 1 20 Изход : 2 3 5 7 11 13 17 19
	*/

	int a, b;
	std::cin >> a >> b;

	if (a > b)
	{
		return 0; 
	}

	for (int i = a; i <= b; i++)
	{
		if (isPrimeNumber(i))
		{
			std::cout << i << " ";
		}
	}

	std::cout << "\n";

	return 0;
}