#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 1: �� �� ������ ��������, ����� ������� ���� ����� ���������� � ���� ��� ��� �� ��������� �.
	���� : 1, ����� : Monday
	���� : 5, ����� : Friday
	���� : 250, ����� : Invalid day!
	*/

	int n;
	std::cout << "Enter a whole number: ";
	std::cin >> n;

	switch (n)
	{
	case 1: std::cout << "Monday" << std::endl; break;
	case 2: std::cout << "Tuesday" << std::endl; break;
	case 3: std::cout << "Wednesday" << std::endl; break;
	case 4: std::cout << "Thursday" << std::endl; break;
	case 5: std::cout << "Friday" << std::endl; break; 
	case 6: std::cout << "Saturday" << std::endl; break;
	case 7: std::cout << "Sunday" << std::endl; break;
	default: std::cout << "Invalid day" << std::endl; break;
	}

	return 0;
}