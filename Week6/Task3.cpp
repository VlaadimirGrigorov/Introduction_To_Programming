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
	// Задача 3 Да се напише функция, която приема масив и връща най - големият общ делител на числата в масива.
	// Вход: [9 18 6 12] , Изход : 3

	constexpr int size = 50;
	int arr[size];
	size_t length;
	std::cin >> length;
	inputArr(arr, length);
	
	std::cout << gcdInArray(arr, length) << std::endl;

	return 0;
}