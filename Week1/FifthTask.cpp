#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 5: ������ �� ���� �����.�� �� �������� ��� ���������� �����.
	���� : 513, ����� : 51
	���� : 1234, ����� : 123
	*/

	int n;
	std::cout << "Enter a whole number: ";
	std::cin >> n;

	std::cout << "New number without last digit is: " << n / 10 << std::endl;
}