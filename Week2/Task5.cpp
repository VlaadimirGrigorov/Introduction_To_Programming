#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 5 (����� + 15 ������) : �� �� ������ ��������, ����� ������� ��� � ������ �� 24 - ������ ��������� � ��������� ����� �� � ����� ���� 15 ������.���������� �� ��
	�������� ��� ������ hh : mm.�������� ������ �� ����� 0 � 23, � �������� ������ �� ����� 0 � 59. �������� � �������� �� �������� ������ � �� ��� �����, � ������ ����
	������ � ����������
	���� : 1 46, ����� : 02 : 01
	���� : 0 1, ����� : 00 : 16
	���� : 23 59, ����� : 00 : 14
	*/

	int hours, minutes;
	std::cout << "Enter hours: ";
	std::cin >> hours;
	std::cout << "Enter minutes: ";
	std::cin >> minutes;

	if (hours < 0 || minutes < 0 
		|| hours > 23 || minutes > 59)
	{
		std::cout << "Error" << std::endl;
	}

	minutes += 15;

	if (minutes > 59)
	{
		hours++;
		minutes -= 60;
	}

	if (hours > 23)
	{
		std::cout << "00";
	}
	else
	{
		if (hours < 10)
		{
			std::cout << "0";
		}
		std::cout << hours;
	}

	std::cout << ":";

	if (minutes < 10)
	{
		std::cout << "0";
	}

	std::cout << minutes << std::endl;

	return 0;
}