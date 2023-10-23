#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 6: Напишете програма, която въвежда две числа - a и b и извежда като резултат(a + b) ^ 4 - (a - b) ^ 2
	Вход : 5 7, Изход : 20732
	*/

	int a, b;
	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter second number: ";
	std::cin >> b;

	int result = pow((a + b), 4) - pow((a - b), 2);
	std::cout << result << std::endl;
}