#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 4 (���� �� ������) : �� �� ������ ��������, ����� ������� ��������� �� ����������� ������ � �������� ������ �.�������� �� ������ ���� : �������(s), ������������(r), ����(c) � 
	����������(triangle).�� ������ ��� �� ����� �� ���� ���� �� ��������(square, rectangle, circle ��� triangle).��� �������� � �������, �� ��������� ��� �� ���� ���� ����� � ������� �� 
	�������� ��.��� �������� � ������������, �� ���������� ��� ���� ����� ��� ����� � ��������� �� �������� ��.��� �������� � ����, �� ��������� ��� ���� ���� ����� � �������� �� �����.��� 
	�������� � ����������, �� ���������� ��� ���� ����� ��� ����� � ��������� �� �������� �� � ��������� �� ���������� ��� ���.���������� �� �� �������� �� 3 ����� ���� ����������� �����
	���� : s 5, ����� : 25
	���� : r 7 2.5, ����� : 17.5
	���� : c 6, ����� : 113.097
	*/

	char figure;
	double result;
	std::cout << "Enter type of figure: ";
	std::cin >> figure;

	if (figure == 's')
	{
		double a;
		std::cout << "Enter a number: ";
		std::cin >> a;
		result = a * a;
	}
	else if (figure == 'r')
	{
		double x, y;
		std::cout << "Enter a first number: ";
		std::cin >> x;
		std::cout << "Enter a second number: ";
		std::cin >> y;
		result = x * y;
	}
	else if (figure == 'c')
	{
		double radius, pi = 3.14;
		std::cout << "Enter a radius: ";
		std::cin >> radius;
		result = radius * radius * pi;
	}
	else if (figure == 't')
	{
		double b, c;
		std::cout << "Enter a number: ";
		std::cin >> b;
		std::cout << "Enter height of triangle: ";
		std::cin >> c;
		result = (b * c) / 2;
	}

	std::cout << result << std::endl;

	return 0;
}