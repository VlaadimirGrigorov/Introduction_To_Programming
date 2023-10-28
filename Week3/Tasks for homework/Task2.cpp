#include <iostream>

int main()
{
	/*
	Задача 2: Да се напише програма, която приема 2 числа.Да се отпечатат всички общи делители сортиран наобратно.
	Вход : 28 21, Изход : 7 1
	Вход : 60 30 Изход : 30 15 10 6 5 3 2 1
	Вход : 19 17 Изход : 1
	*/

	int n, k;
	std::cout << "Enter two numbers: ";
	std::cin >> n >> k;

	int lessNumber = n < k ? n : k;

	for (int i = lessNumber; i >= 1; i--)
	{
		if (n % i == 0 && k % i == 0)
		{
			std::cout << i << " ";
		}
	}

	std::cout << "\n";

	return 0;
}