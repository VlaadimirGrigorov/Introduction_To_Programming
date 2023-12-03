#include <iostream>

void inputArr(int arr[], size_t length)
{
	for (int i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}

void countInversions(const int arr[], unsigned N, int &index, int& count)
{
	for (int i = index + 1; i < N; i++)
	{
		if (index < i && arr[index] > arr[i])
		{
			count++;
		}
	}
}

int printNumberOfInversions(const int arr[], unsigned N)
{
	int count = 0;
	for (int i = 0; i < N - 1; i++)
	{
		countInversions(arr, N, i, count);
	}

	return count;
}

int main()
{
	//Задача 5 : Въвежда се число N(N <= 1000) и N цели числа(елементи на масив).Да се отпечатат броя на инверсиите в масива.
	//Инверсия ще наричаме двойка индекси(i, j), където i < j и arr[i] > arr[j]
	//Вход : 6 5 4 3 2 10 Изход : 15 //в масива [5 4 3 2 1 0] има 15 инверсии.
	//Вход : 5 10 11 12 13 14 15, Изход : 0

	constexpr int size = 100;
	unsigned N; 
	int arr[size];
	std::cin >> N;
	inputArr(arr, N);

	if (N >= 1000)
	{
		return 0;
	}

	std::cout << "Count of inversions is " << inversions(arr, N) << std::endl;

	return 0;
}