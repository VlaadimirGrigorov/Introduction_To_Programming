#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 6 : �� �������, �� �������� �� ����� � �����, ��� ����� ����� � ��� � ������������ �������� ��� ����� �� ����� �� ������ ��� ��� ������������ �� - ����� ��� 
	����� �� ���.�� ������ � ��������� ������� ����� ���� �� ���� �����.�������� ��������, ����� ������� �� ����������� 5 �� ���� ���� �����.�� �� ������ �� ����������� 
	����� "yes", ��� ���������� �������� � �����, ��� "no", � �������� ������.
	���� : 1 5 1 0 3, ����� : no
	���� : -10 10 - 2 11 - 22, ����� : yes
	*/

	int num1, num2, num3, num4, num5;
	std::cout << "Enter first number: ";
	std::cin >> num1;
	std::cout << "Enter second number: ";
	std::cin >> num2;
	std::cout << "Enter third number: ";
	std::cin >> num3;
	std::cout << "Enter forth number: ";
	std::cin >> num4;
	std::cout << "Enter fifth number: ";
	std::cin >> num5;

	if ((num2 >= num1 && num2 >= num3 || num2 <= num1 && num2 <= num3)
		&& (num3 >= num2 && num3 >= num4 || num3 <= num2 && num3 <= num4)
		&& (num4 >= num3 && num4 >= num5 || num4 <= num3 && num4 <= num5))
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}