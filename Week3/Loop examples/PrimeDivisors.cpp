#include <iostream>
#include <cmath>

int main()
{
	// Естествено число (unsigned int)
	// Разбиване на прости множители сортирани низходяощо

	// unclear, need to understand it after UP

	unsigned int number;
	std::cout << "Enter a positive number: ";
	std::cin >> number;

	for (int i = n; i >= 2; i--) // because it's descending
	{
		unsigned int num;
		bool isPrime = true;
		std::cout << "Enter a positive number: ";
		std::cin >> num;
		double temp = sqrt(num);
		for (int i = 2; i <= temp; i++) // instead of break we can put ;i <= temp && isPrime;
		{
			if (n % i == 0) // if he's divided with any number in the range, it's not prime
			{
				isPrime = false;
				break;
			}
			// if he goes through all of the elements without dividing with any number, then it's a prime
		}

		if (!isPrime)
		{
			continue;
		}

		int count = 0; // count the degrees
		while (number % i == 0)
		{
			count++;
			number /= i;
		}

		if (count >= 1)
		{
			std::cout << i << " ";
			if (count >= 2)
			{
				std::cout << "^";
			}
			std::cout << " ";
		}

	}

	return 0;
}