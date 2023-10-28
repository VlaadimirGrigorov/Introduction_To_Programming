#include <iostream>

int power(int base, int exponent)
{
	int result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return result;
}

int main()
{
	/*
	Задача 6: Въвеждат се 5 цели числа - a, b, c, d, e.Разглеждаме полинома f(x) = a * x ^ 4 + b * x ^ 3 + c * x ^ 2 + d * x + e.Отпечатайте всички цели решения на f(x) >= 0
	където x e в интервала[-100, 100]
	Вход : -1 4 0 8 1, Изход : 0 1 2 3 4
	Вход : 0 0 - 1 5 - 6 Изход : 2 3
	*/

	int a1, b1, c, d, e;
	std::cin >> a1 >> b1 >> c >> d >> e;

	for (int x = -100; x <= 100; x++)
	{
		int result = a1 * power(x, 4) + b1 * power(x, 3) + c * power(x, 2) + d * x + e;
		if (result >= 0)
		{
			std::cout << x << " ";
		}
	}

	return 0;
}