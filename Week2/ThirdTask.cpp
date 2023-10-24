#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 3 (Speed trap) : Да се напише програма, която въвежда скорост(десетично число) и отпечатва информация за скоростта.При скорост до 10 (включително)отпечатайте “slow”.При скорост 
	над 10 и до 50 отпечатайте “average”.При скорост над 50 и до 150 отпечатайте “fast”.При скорост над 150 и до 1000 отпечатайте “ultra fast”.При по - висока скорост отпечатайте “extremely
	fast”
	Вход : 8, Изход : slow
	Вход : 49.5, Изход : average
	Вход : 126, Изход : fast
	Вход : 3500, Изход : extremely fast
	*/

	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	if (number < 10)
	{
		std::cout << "slow" << std::endl;
	}
	else if (number >= 10 && number <= 50)
	{
		std::cout << "average" << std::endl;
	}
	else if (number >= 50 && number <= 150)
	{
		std::cout << "fast" << std::endl;
	}
	else if (number > 150 && number < 1000)
	{
		std::cout << "ultra fast" << std::endl;
	}
	else
	{
		std::cout << "extremely fast" << std::endl;
	}

	return 0;
}