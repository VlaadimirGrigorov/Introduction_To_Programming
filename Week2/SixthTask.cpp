#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 6 : Ще казваме, че поредица от числа е трион, ако всяко число в нея е едновременно поголямо или равно от двата си съседа или пък едновременно по - малко или 
	равно от тях.За първия и последния елемент имаме само по един съсед.Напишете програма, която въвежда от стандартния 5 на брой цели числа.Да се изведе на стандартния 
	изход "yes", ако въведената поредица е трион, или "no", в противен случай.
	Вход : 1 5 1 0 3, Изход : no
	Вход : -10 10 - 2 11 - 22, Изход : yes
	*/

	int num1, num2, num3, num4, num5;
	std::cout << "Enter first number: ";
	std::cin >> num1;
	std::cout << "Enter second number: ";
	std::cin >> num2;
	std::cout << "Enter third number: ";
	std::cin >> num3;
	std::cout << "Enter forth number: ";
	std::cin >> num4;
	std::cout << "Enter fifth number: ";
	std::cin >> num5;

	if ((num2 >= num1 && num2 >= num3 || num2 <= num1 && num2 <= num3)
		&& (num3 >= num2 && num3 >= num4 || num3 <= num2 && num3 <= num4)
		&& (num4 >= num3 && num4 >= num5 || num4 <= num3 && num4 <= num5))
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}