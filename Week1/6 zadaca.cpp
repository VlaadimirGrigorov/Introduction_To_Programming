#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 6: �������� ��������, ����� ������� ��� ����� - a � b � ������� ���� ��������(a + b) ^ 4 - (a - b) ^ 2
	���� : 5 7, ����� : 20732
	*/

	int a, b;
	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter second number: ";
	std::cin >> b;

	int result = pow((a + b), 4) - pow((a - b), 2);
	std::cout << result << std::endl;
}