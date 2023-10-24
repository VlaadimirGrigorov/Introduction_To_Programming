#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 2: Въвежда се трицифрено цяло число n.Да се отпечата обърнатото число събрано с единица.
	Вход : 265, Изход : 563
	Вход : 289, Изход : 983
	*/

	int number;
	std::cout << "Enter three digit number: ";
	std::cin >> number;

	int firstDigit = number / 100;
	int secondDigit = (number / 10) % 10;
	int thirdDigit = number % 10;

	int newNumber = thirdDigit * 100 + secondDigit * 10 + firstDigit + 1;
	std::cout << newNumber << std::endl;
}