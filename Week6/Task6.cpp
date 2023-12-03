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
	// Задача 6: От даден масив от сортирани последнователни числа са премахнати някои числа.Напишете фунцкия, която приема такъв 
	// масив и връща най - малкото премахнато число.
	// Решението ви трябва да работи с логартмична сложност(а не с линейно минаване през масива).
	// Вход : [5 6 7 9 10 12 13] , Изход : 8 //премахнатите числа са 8 и 11.
	// Вход : [10 12 13 14 16] , Изход : 11 //премахнатите числа са 11 и 15.
	// Модифицирайте функцията, за да отпечатване и най - голямото премахнато число

	constexpr int size = 100;
	int arr[size];
	size_t length;
	std::cin >> length;
	inputArr(arr, length);
	print(arr, length);

	return 0;
}