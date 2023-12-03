#include <iostream>

void inputArr(int arr[], size_t length)
{
	for (int i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}

unsigned lcm(int n, int k)
{
	unsigned max = n > k ? n : k;
	unsigned lcmCandidate = max;

	while (lcmCandidate % n != 0 || lcmCandidate % k != 0)
	{
		lcmCandidate += max;
	}

	return lcmCandidate;
}


int lcmInArray(const int arr[], size_t length)
{
	// Initialize array
	int result = arr[0];
	for (int i = 1; i < length; i++)
	{
		result = lcm(result, arr[i]);
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

	std::cout << lcmInArray(arr, length) << std::endl;

	return 0;
}