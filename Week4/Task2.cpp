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

int main()
{
	/*
	������ 2: �������� �������, ����� ������ ���� ����� � ����� ���� �� ������� ��.
	���� : 4, ����� : 1
	���� : -4, ����� : 1
	���� : 5430 ����� : 4
	*/
	
	int number;
	std::cin >> number;

	std::cout << countDigits(number) << std::endl;


	return 0;
}