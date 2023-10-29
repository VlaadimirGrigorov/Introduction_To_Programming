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
	������ 7: �������� �������, ����� ������ ���������� ����� � ����� ���� ������� �� �� ���������(��� �������� ��� � �������� ���).
	���� : 122239, ����� : true
	*/

	int num;
	std::cin >> num;

	std::cout << std::boolalpha << isSorted(num) << std::endl;

	return 0;
}