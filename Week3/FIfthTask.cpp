#include <iostream>
#include <cmath>

int main()
{
	// най-често срещана цифра

	unsigned int n;
	std::cin >> n;

	int maxOccurences = 0;
	int maxDigit = 1;
	int copy = n;

	for (int i = 0; i < 9; i++)
	{
		int currentCount = 0;
		while (copy != n)
		{
			int lastDigit = n % 10;
			if (lastDigit == i)
			{
				currentCount++;
			}
			n /= 10;
		}

		if (currentCount > maxOccurences)
		{
			maxDigit = i;
			maxOccurences = currentCount;
		}
	}

	std::cout << maxDigit << std::endl;

	return 0;
}