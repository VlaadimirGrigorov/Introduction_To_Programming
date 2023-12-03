#include <iostream>

void inputArr(int arr[], size_t length)
{
	for (int i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}

void leastMissingNumber(int arr[], size_t length, int& least, int& biggest) {
	int left = 0;
	int right = length - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		// Check if the pattern is broken
		if (arr[mid] != mid + 1)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}

	// After the loop, 'left' will represent the position where the pattern breaks
	// Calculate the missing numbers accordingly
	least = arr[0] + left;
	biggest = arr[length - 1] - left;
}

void print(int arr[], size_t length)
{
	int least = 0, biggest = 0;

	leastMissingNumber(arr, length, least, biggest);

	std::cout << "Least missing number is " << least << " and biggest missing number is " << biggest << std::endl;
}

int main()
{
	constexpr int size = 100;
	int arr[size];
	size_t length;
	std::cin >> length;
	inputArr(arr, length);
	print(arr, length);

	return 0;
}