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
	������ 3: �� �� ������ ��������, ����� ������ ����� � �������� �����a�� �����, ��� ������� ��� ������� ���� ����� ��� �������� �������� ��� �����, ��� ������� ��� �����
	���� �����.���� ���� �� �� �������� ������� ��������� � 1 - ��.
	����: 1234, �����: 14, 15
	����: 123 �����: 13, 14
	����: 51234 �����: 5134, 5135
	����: 5 �����: 0, 1
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