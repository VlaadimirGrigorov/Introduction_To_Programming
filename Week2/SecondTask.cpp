#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 2 (Between 100 and 200) : �� �� ������ ��������, ����� ������� ���� ����� � ��������� ���� � ��� 100, ����� 100 � 200 ��� ��� 200. �� �� ��������� ��������� ��������� ���� � 
	��������� �� - ���� :
	���� : 95, ����� : Less than 100
	���� : 120, ����� : Between 100 and 200
	���� : 250, ����� : Greater than 200
	*/

	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	if (num < 100)
	{
		std::cout << "Less than 100" << std::endl;
	} 
	else if (num > 100 && num < 200)
	{
		std::cout << "Between 100 and 200" << std::endl;
	}
	else
	{
		std::cout << "Greater than 200" << std::endl;
	}

	return 0;
}