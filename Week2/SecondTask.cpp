#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 2 (Between 100 and 200) : Да се напише програма, която въвежда цяло число и проверява дали е под 100, между 100 и 200 или над 200. Да се отпечатат съответно съобщения като в 
	примерите по - долу :
	Вход : 95, Изход : Less than 100
	Вход : 120, Изход : Between 100 and 200
	Вход : 250, Изход : Greater than 200
	*/

	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;

	if (num < 100)
	{
		std::cout << "Less than 100" << std::endl;
	} 
	else if (num > 100 && num < 200)
	{
		std::cout << "Between 100 and 200" << std::endl;
	}
	else
	{
		std::cout << "Greater than 200" << std::endl;
	}

	return 0;
}