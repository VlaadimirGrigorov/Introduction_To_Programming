#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 4 (Лице на фигура) : Да се напише програма, която въвежда размерите на геометрична фигура и пресмята лицето й.Фигурите са четири вида : квадрат(s), правоъгълник(r), кръг(c) и 
	триъгълник(triangle).На първия ред на входа се чете вида на фигурата(square, rectangle, circle или triangle).Ако фигурата е квадрат, на следващия ред се чете едно число – дължина на 
	страната му.Ако фигурата е правоъгълник, на следващите два реда четат две числа – дължините на страните му.Ако фигурата е кръг, на следващия ред чете едно число – радиусът на кръга.Ако 
	фигурата е триъгълник, на следващите два реда четат две числа – дължината на страната му и дължината на височината към нея.Резултатът да се закръгли до 3 цифри след десетичната точка
	Вход : s 5, Изход : 25
	Вход : r 7 2.5, Изход : 17.5
	Вход : c 6, Изход : 113.097
	*/

	char figure;
	double result;
	std::cout << "Enter type of figure: ";
	std::cin >> figure;

	if (figure == 's')
	{
		double a;
		std::cout << "Enter a number: ";
		std::cin >> a;
		result = a * a;
	}
	else if (figure == 'r')
	{
		double x, y;
		std::cout << "Enter a first number: ";
		std::cin >> x;
		std::cout << "Enter a second number: ";
		std::cin >> y;
		result = x * y;
	}
	else if (figure == 'c')
	{
		double radius, pi = 3.14;
		std::cout << "Enter a radius: ";
		std::cin >> radius;
		result = radius * radius * pi;
	}
	else if (figure == 't')
	{
		double b, c;
		std::cout << "Enter a number: ";
		std::cin >> b;
		std::cout << "Enter height of triangle: ";
		std::cin >> c;
		result = (b * c) / 2;
	}

	std::cout << result << std::endl;

	return 0;
}