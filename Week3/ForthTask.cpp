#include <iostream>
#include <cmath>

int main()
{
	// LCM

	int n, k;
	std::cout << "Enter two numbers: ";
	std::cin >> n >> k;

	int lemCandidate = n > k ? n : k;

	while (lemCandidate % n != 0 || lemCandidate % k != 0) // the goal is to be divided with both, that is why we use ||
	{
		lemCandidate ++;
	}

	std::cout << "Result: " << lemCandidate << std::endl;
	 
	// GCD
	// <15, 9> -> 15 % 9 = 6
	// <9, 6> -> 9 % 6 == 3
	// <6, 3> -> 6 % 3 == 0
	// <3, 0> -> If we have 0 on the right side then 3 is our number (on left side)

	int a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;

	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	while (b != 0)
	{
		int newB = a % b;
		a = b;
		b = newB;
	}

	std::cout << "Result: " << a << std::endl;

	// Естествено число (значи не можем да използваме цяло число, трябва unsigned int)

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
	
	std::cout << isPrime << std::endl;

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