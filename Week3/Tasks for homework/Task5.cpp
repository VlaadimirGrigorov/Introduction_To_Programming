#include <iostream>

int main()
{
	/*
	������ 5: �� �� ������ ��������, ����� ������ ���� ����� � ��������� ���� � ������ �� 2 - ����.
	���� : 1, ����� : true
	���� : 20 ����� : false
	���� : 1024 ����� : true
	*/

	int x;
	std::cout << "Enter a number: ";
	std::cin >> x;

	while (x % 2 == 0)
	{
		x /= 2; // last operation is 2 / 2 = 1
	}

	std::cout << ((x == 1) ? "true" : "false") << std::endl;

	return 0;
}