#include <iostream>
#include <cmath>

int main()
{
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

	return 0;
}