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
	// Задача 2 Да се напише функция, която приема масив и връща най - малкото общо кратно на числата в масива.
	// Вход: [9 18 6 12] , Изход : 36

	constexpr int size1 = 50;
	int arr1[size1];
	size_t length1;
	std::cin >> length1;
	inputArr(arr1, length1);

	std::cout << lcmInArray(arr1, length1) << std::endl;

	return 0;
}