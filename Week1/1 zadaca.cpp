#include <iostream>
#include <cmath>

int main()
{
	// ������ 1: ������� �� ���� �����.����������� 1, ��� ������� � ����� � 0, ��� � �������.
	// ���� : 265, ����� : 0
	// ���� : 290, ����� : 1

	int num;
	std::cout << "Enter a whole number: ";
	std::cin >> num;

	bool isEven = num % 2;
	if (isEven)
	{
		std::cout << "1" << std::endl; // std::cout << isEven << std::endl;
	}
	else
	{
		std::cout << "0" << std::endl; // std::cout << isEven << std::endl;
	}
}