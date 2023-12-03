#include <iostream>

void inputArr(int arr[], size_t length)
{
	for (int i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}

unsigned gcd(int n, int k)
{
	if (n < k)
	{
		int temp = n;
		n = k;
		k = temp;
	}

	while (k != 0)
	{
		int newK = n % k;
		n = k;
		k = newK;
	}

	return n;
}

int gcdInArray(const int arr[], size_t length)
{
	// Initialize array
	int result = arr[0];
	for (int i = 0; i < length; i++)
	{
		result = gcd(result, arr[i]);
	}

	return result;
}

int main()
{
	constexpr int size = 50;
	int arr[size];
	size_t length;
	std::cin >> length;
	inputArr(arr, length);
	
	std::cout << gcdInArray(arr, length) << std::endl;

	return 0;
}