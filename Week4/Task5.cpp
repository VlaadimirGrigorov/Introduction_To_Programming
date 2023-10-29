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
	������ 5: �������� �������, ����� ������ �� �������� ���������� ����� N, ����� �����, ����� � �������� �� �������������� �� ���������� ����� �� N � ���������� N.
	���� : 1234 ����� : 43211234
	*/

	int num;
	std::cin >> num;

	std::cout << reversedContatenation(num) << std::endl;

	return 0;
}