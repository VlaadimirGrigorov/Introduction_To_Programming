#include <iostream>

int main()
{
	/*
	������ 1: �� �� ������ ��������, ����� ������ ����� �� �����.������� �� �������, ������ �� �� ������ ������� 0. ������ ������ �� �� �������� ������������� �������� � ��
	���������� �� ��������.
	���� : 1 2 3 4 5 6 0, ����� : 21
	���� : 9 9 1 0, ����� : 19
	���� : 5 4 3 0 ����� : 12
	*/

	int number, sum = 0;
	do
	{
		std::cout << "Enter a number different than zero: ";
		std::cin >> number;
		if (number != 0)
		{
			sum += number;
		}
	} while (number != 0);

	return 0;
}