#include <iostream>
#include <cmath>

int main()
{
	/*
	Задача 17: Да се напише програма, която приема цяло положително число n(n >= 2) и след това n цели числа.Да се отпечатат най - голямато и второто по големина.
	Вход : 10 9 1 4 5 10 99 34 0 44 1, Изход : 99 44
	Вход : 4 1 3 3 1, Изход : 4 3
	*/

	int n; 
	std::cout << "Enter a number: ";
	std::cin >> n;

	if (n < 2)
	{
		return 0;
	}

	// input all ten numbers
	int otherNumbers, i = 0;
	std::cin >> otherNumbers; // first entered number
	int maxNumber = otherNumbers, secondMaxNumber = otherNumbers; // set max and secondMax to be equal to first entered number and compare it with others

	do
	{
		std::cin >> otherNumbers; // second entered number -> 1
		if (otherNumbers > maxNumber) // 1 > 9
		{
			maxNumber = otherNumbers;
		}
		if (otherNumbers > secondMaxNumber && otherNumbers != maxNumber) // 1 > 9 && 1 != 99
		{
			secondMaxNumber = otherNumbers;
		}
		i++;
	} while (i < n - 1); // intered till last - 1 because we entered one number before this loop (9)

	std::cout << "Max number is " << maxNumber << " and second max number is " << secondMaxNumber << std::endl;

	

	return 0;
}