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
	������ 6: �������� �� 5 ���� ����� - a, b, c, d, e.����������� �������� f(x) = a * x ^ 4 + b * x ^ 3 + c * x ^ 2 + d * x + e.����������� ������ ���� ������� �� f(x) >= 0
	������ x e � ���������[-100, 100]
	���� : -1 4 0 8 1, ����� : 0 1 2 3 4
	���� : 0 0 - 1 5 - 6 ����� : 2 3
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