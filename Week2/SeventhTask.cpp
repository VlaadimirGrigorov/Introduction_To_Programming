#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 7 : �� �� ������ ��������, ����� ��� �������� ������ r � �������� �����(�, �) ��������� ���� ������� �� ������ ����� / ����� ��� �� ������� �� ��������� � ������
	(0, 0).
	���� : 5 0 5, ����� : On the circle
	���� : 5 10 30, ����� : Out of the circle
	���� : 5 0 2, ����� : In the circle
	*/

	double radius;
	int x, y;
	std::cout << "Enter radius: ";
	std::cin >> radius;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;

	double distance = sqrt(x * x + y * y);

	if (distance == radius)
	{
		std::cout << "The point (" << x << "," << y << ") is on the circle!" << std::endl;
	}
	else if (distance > radius)
	{
		std::cout << "The point (" << x << "," << y << ") is outside the circle!" << std::endl;
	}
	else
	{
		std::cout << "The point (" << x << "," << y << ") is inside the circle!" << std::endl;
	}

	return 0;
}