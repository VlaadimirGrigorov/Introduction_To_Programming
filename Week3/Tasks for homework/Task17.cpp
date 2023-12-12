#include <iostream>

int maxElement(int n)
{
	int number, max = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> number;
		if (number > max)
		{
			max = number;
		}
	}

	return max;
}

int main()
{
	int n, max = 0, secondMax = 0;
	std::cin >> n;
	int i = 0;

	do
	{
		int number;
		std::cin >> number;
		if (number > max)
		{
			secondMax = max;
			max = number;
		}
		else if (number > secondMax && number != max)
		{
			secondMax = max;
		}
	} while (i != n);

	std::cout << max << " and " << secondMax << std::endl;

	return 0;
}