#include <iostream>

void inputArr(int arr[], size_t length)
{
	for (int i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}

bool isArrPalindrome(const int arr[], size_t length)
{
	for (int i = 0; i < length / 2; i++)
	{
		if (arr[i] != arr[length - i - 1])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	// Задача 1: Да се напише функция, която приема масив и връща дали е палиндром.
	// Вход : [1 2 3 2 1] , Изход : true
	constexpr int size = 100;
	int arr[size];
	size_t length;
	std::cin >> length;

	inputArr(arr, length);
	std::cout << std::boolalpha << isArrPalindrome(arr, length) << std::endl;

	return 0;
}