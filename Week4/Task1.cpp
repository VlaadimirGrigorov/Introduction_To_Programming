#include <iostream>
#include <cmath>

int modul(int number)
{
	return abs(number);
}

int main()
{
	/*
	������ 1: �������� �������, ����� ������ ���� ����� � ����� ������ ��.
	���� : 4, ����� : 4
	���� : -4, ����� : 4
	*/

	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	std::cout << modul(number) << std::endl;

	return 0;
}