#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 3: ������ �� ������.�� �� �������� 1, ��� � ��������� ������ �����, � 0, ��� �� �.
	���� : �, ����� : 1
	���� : �, ����� : 1
	���� : �, ����� : 0
	*/

	char symbol;
	std::cout << "Enter a symbol: ";
	std::cin >> symbol;

	if (symbol == 'A' || symbol == 'E' || symbol == 'I' || symbol == 'O' || symbol == 'U')
	{
		std::cout << "1" << std::endl;
	}
	else
	{
		std::cout << "0" << std::endl;
	}
}