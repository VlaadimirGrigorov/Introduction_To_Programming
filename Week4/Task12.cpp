#include <iostream>
#include <cmath>

int digit(char symbol)
{
	if (symbol >= '0' && symbol <= '9')
	{
		return symbol - '0';
	}

	return -1;
}

int main()
{
	//������ 12: �������� �������, ����� ������ ������ � ��� �������� � �����, �� ����� ����������� �����.��� �������� �� � �����, �� �� ����� - 1
	//���� : '7', ����� : 7
	//���� : '!', ����� : -1 //��� ������

	char symbol2;
	std::cin >> symbol2;

	std::cout << digit(symbol2) << std::endl;

	return 0;
}