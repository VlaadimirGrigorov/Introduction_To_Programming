#include <iostream>

void inputArr(int arr[], size_t length)
{
	for (int i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}

// Check if number is in array, and always start from certain position
int isElementInArray(const int arr[], size_t length, int firstElement, int index)
{
	for (int i = index; i < length; i++)
	{
		if (arr[i] == firstElement)
		{
			return i;
		}
	}

	return -1;
}

int isArrPalindrome1(const int arr[], size_t length)
{
	int position = isElementInArray(arr, length, arr[0], 0);
	if (position == -1)
	{
		return false;
	}

	for (int i = position + 1; i < length; i++)
	{
		int index = isElementInArray(arr, length, arr[0], position + 1);
		if (index != -1 && index != length - 1)
		{
			return index;
		}
	}
		
	return -1;
}

bool isConcatenationOfTwoPalindromeArrays(const int arr[], size_t length)
{
	if (isArrPalindrome1(arr, length) != -1)
	{
		int index = isArrPalindrome1(arr, length); // index after first palindrome
		int pos = isElementInArray(arr, length, arr[index + 1], index); // index of the second starting palindrome
		for (int i = pos + 1; i < length; i++) // index 5, looking for number 4
		{
			int pos1 = isElementInArray(arr, length, arr[index + 1], pos + 1);
			if (pos1 == length - 1)
			{
				return true;
			}
		}
	}

	return false;
}

int main()
{
	/*
	������ 4 : �� �� ������ �������, ����� ������ ����� � ����� ���� � ������������ �� ��� ������, ����� �� ����������.
	���� : [1 2 3 2 1 4 5 5 4] , ����� : true
	���� : [1 2 3 4 5] , ����� : false
	���� : [1 2 3 2 1] , ����� : true
	*/

	constexpr int size3 = 50;
	int arr3[size3];
	size_t length3;
	std::cin >> length3;
	inputArr(arr3, length3);

	std::cout << std::boolalpha << isConcatenationOfTwoPalindromeArrays(arr3, length3) << std::endl;

	return 0;
}