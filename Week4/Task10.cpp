#include <iostream>
#include <cmath>

bool isUppercase(char symbol)
{
	return symbol >= 'A' && symbol <= 'Z';
}

int main()
{
	//������ 10: �������� �������, ����� ������ ������ � ���� ������� � ������ �����.
	//���� : '�', ����� : true
	//���� : '!', ����� : false //��� ������

	char symbol;
	std::cin >> symbol;

	std::cout << std::boolalpha << isUppercase(symbol) << std::endl;

	return 0;
}