#include <iostream>
#include <cmath>

double perimeterOfTriangle(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double sideA = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	double sideB = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	double sideC = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));

	return sideA + sideB + sideC;
}

int main()
{
	/*
	Задача 3: Напишете функция, която приема 6 целочислени координати(3 точки) и връща обиколката на триъгълника по тези точки.
	Вход : 1 1 4 7 0 10, Изход : 20.764
	*/

	int x1, y1, y2, x2, y3, x3;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	std::cout << perimeterOfTriangle(x1, y1, x2, y2, x3, y3) << std::endl;

	return 0;
}