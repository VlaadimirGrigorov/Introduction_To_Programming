#include <iostream>

int main()
{
	/*
	Задача 5: Да се напише програма, която приема цяло число и отпечатва дали е степен на 2 - ката.
	Вход : 1, Изход : true
	Вход : 20 Изход : false
	Вход : 1024 Изход : true
	*/

	int x;
	std::cout << "Enter a number: ";
	std::cin >> x;

	while (x % 2 == 0)
	{
		x /= 2; // last operation is 2 / 2 = 1
	}

	std::cout << ((x == 1) ? "true" : "false") << std::endl;

	return 0;
}