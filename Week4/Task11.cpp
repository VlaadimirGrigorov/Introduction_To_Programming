#include <iostream>
#include <cmath>

char lowerToUpper(char symbol)
{
	if (symbol >= 'a' && symbol <= 'z')
	{
		symbol -= 32;
	}

	return symbol;
}

int main()
{
	//������ 11: �������� �������, ����� ������ ������ � ����� ����������� ������ �����(��� ��������� ������ � ����� ������)
	//���� : '�', ����� : '�'
	//���� : '!', ����� : '!' //��� ������

	char symbol1;
	std::cin >> symbol1;

	std::cout << lowerToUpper(symbol1);

	return 0;
}