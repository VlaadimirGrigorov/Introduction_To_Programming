#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 2: ������� �� ���������� ���� ����� n.�� �� �������� ���������� ����� ������� � �������.
	���� : 265, ����� : 563
	���� : 289, ����� : 983
	*/

	int number;
	std::cout << "Enter three digit number: ";
	std::cin >> number;

	int firstDigit = number / 100;
	int secondDigit = (number / 10) % 10;
	int thirdDigit = number % 10;

	int newNumber = thirdDigit * 100 + secondDigit * 10 + firstDigit + 1;
	std::cout << newNumber << std::endl;
}