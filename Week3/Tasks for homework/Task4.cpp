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
	������ 4: �� �� ������ ��������, ����� ������ 2 ����a - a � b � ��������� ������ ������ ����� � ���������[a, b].
	���� : 10 20, ����� : 11 13 17 19
	���� : 20 1, ����� :
	���� : 1 20 ����� : 2 3 5 7 11 13 17 19
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