#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 5: Въвежа се цяло число.Да се отпечата без последната цифра.
	Вход : 513, Изход : 51
	Вход : 1234, Изход : 123
	*/

	int n;
	std::cout << "Enter a whole number: ";
	std::cin >> n;

	std::cout << "New number without last digit is: " << n / 10 << std::endl;
}