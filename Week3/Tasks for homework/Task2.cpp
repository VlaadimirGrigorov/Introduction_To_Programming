#include <iostream>

int main()
{
	/*
	������ 2: �� �� ������ ��������, ����� ������ 2 �����.�� �� ��������� ������ ���� �������� �������� ���������.
	���� : 28 21, ����� : 7 1
	���� : 60 30 ����� : 30 15 10 6 5 3 2 1
	���� : 19 17 ����� : 1
	*/

	int n, k;
	std::cout << "Enter two numbers: ";
	std::cin >> n >> k;

	int lessNumber = n < k ? n : k;

	for (int i = lessNumber; i >= 1; i--)
	{
		if (n % i == 0 && k % i == 0)
		{
			std::cout << i << " ";
		}
	}

	std::cout << "\n";

	return 0;
}