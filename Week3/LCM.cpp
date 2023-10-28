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
	 

	return 0;
}