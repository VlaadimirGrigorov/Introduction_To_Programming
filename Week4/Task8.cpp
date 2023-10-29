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
	������ 8: �������� �������, ����� ������ ���������� ����� � ����� ���� ������� �� �� �������.
	���� : 111111, ����� : true
	*/

	unsigned int number1;
	std::cin >> number1;

	std::cout << "Eighth task: " << std::endl;
	std::cout << std::boolalpha << areDigitsEqual(number1) << std::endl;

	return 0;
}