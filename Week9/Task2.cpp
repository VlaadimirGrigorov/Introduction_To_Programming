#include <iostream>

const int MAX_SIZE = 20;

void enterMatrix(double matrix[][MAX_SIZE], size_t rows, size_t colls)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

bool checkRelation(const int matrix[][MAX_SIZE], size_t rows, size_t colls)
{
	if (rows != colls)
	{
		return false;
	}

	for (int i = 0; i < rows; i++)
	{
		if (matrix[i][i] == 0)
		{
			return false;
		}

		for (int j = i + 1; j < colls; j++)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	// Задача 2: Напишете функция, която приема матрица NxN и проверява дали релацията, която представлява матрицата, е 
	// релация на еквивалентност.

	int matrix[MAX_SIZE][MAX_SIZE];
	size_t rows, colls;
	std::cin >> rows >> colls;
	enterMatrix(matrix, rows, colls);
	
	std::cout << std::boolalpha << checkRelation(matrix, rows, colls) << std::endl;

	return 0;
}