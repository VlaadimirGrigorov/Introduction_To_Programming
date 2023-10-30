#include <iostream>
#include <cmath>

int countDigits(int number)
{
	int counter = 0;

	while (number != 0)
	{
		counter++;
		number /= 10;
	}

	return counter;
}

int reverse(int number)
{
	int reverse = 0;

	while (number != 0)
	{
		(reverse *= 10) += number % 10;
		number /= 10;
	}

	return reverse;
}

// function for deleting min digit 
int deleteMinDigit(int number, int min)
{
	int result = 0;
	int position = 1;
	while (number != 0)
	{
		int lastDigit = number % 10;
		if (lastDigit == min) // if he finds then delete it and break out from the loop (if they are two minimum it will just delete the first he finds
		{
			number /= 10;
			break;
		}
		result += lastDigit * position;
		position *= 10;
		number /= 10;
	}
	int resultReversed = reverse(result);
	int digitsReversed = countDigits(resultReversed);
	int power = pow(10, digitsReversed);
	(number *= power) += resultReversed;
	return number;
}

int sortedNumber(unsigned int number) // find a minimum number and store it in new number
{
	unsigned int sorted = 0; // new number where we store sorted number
	int digits = countDigits(number); // count digits to see how many operations we need to do
	int copy = number; // make a copy of a number so we don't have problem with actual number

	for (int i = 0; i < digits; i++) 
	{
		int min = copy % 10; // say that last digit is min
		int nCopy = copy; // making another copy because we are going to need it for newNumber, if we don't make it copy will be 0 after while loop
		copy /= 10;
		while (copy != 0)
		{
			if (copy % 10 < min)
			{
				min = copy % 10;
			}
			copy /= 10;
		}
		(sorted *= 10) += min;
		int newNumber = deleteMinDigit(nCopy, min);
		copy = newNumber; // updating the copy
	}

	return sorted;
}

int main()
{
	/*
	Задача 9: Напишете функция, която приема естествено число и връща ново число, което има същите цифри, но в сортиран вид.
	Вход : 531261, Изход : 112356
	*/

	unsigned int num1;
	std::cin >> num1;

	std::cout << sortedNumber(num1) << std::endl;

	return 0;
}