#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 5 (Време + 15 минути) : Да се напише програма, която въвежда час и минути от 24 - часово денонощие и изчислява колко ще е часът след 15 минути.Резултатът да се
	отпечата във формат hh : mm.Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59. Часовете и минутите се изписват винаги с по две цифри, с водеща нула
	когато е необходимо
	Вход : 1 46, Изход : 02 : 01
	Вход : 0 1, Изход : 00 : 16
	Вход : 23 59, Изход : 00 : 14
	*/

	int hours, minutes;
	std::cout << "Enter hours: ";
	std::cin >> hours;
	std::cout << "Enter minutes: ";
	std::cin >> minutes;

	if (hours < 0 || minutes < 0 
		|| hours > 23 || minutes > 59)
	{
		std::cout << "Error" << std::endl;
	}

	minutes += 15;

	if (minutes > 59)
	{
		hours++;
		minutes -= 60;
	}

	if (hours > 23)
	{
		std::cout << "00";
	}
	else
	{
		if (hours < 10)
		{
			std::cout << "0";
		}
		std::cout << hours;
	}

	std::cout << ":";

	if (minutes < 10)
	{
		std::cout << "0";
	}

	std::cout << minutes << std::endl;

	return 0;
}