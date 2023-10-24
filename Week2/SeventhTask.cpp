#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 7 : Да се напише програма, която при подадени радиус r и двумерна точка(х, у) проверява дали точката се намира вътре / извън или по контура на окръжност с център
	(0, 0).
	Вход : 5 0 5, Изход : On the circle
	Вход : 5 10 30, Изход : Out of the circle
	Вход : 5 0 2, Изход : In the circle
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