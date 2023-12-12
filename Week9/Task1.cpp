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

void init(int matrix[][MAX_SIZE], size_t rows, size_t colls, int value)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls; j++)
		{
			matrix[i][j] = value;
		}
	}
}

void printMatrix(double matrix[][MAX_SIZE], size_t rows, size_t colls)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void transposeMatrix(int matrix[][MAX_SIZE], int matrixCopy[][MAX_SIZE], size_t rows, size_t colls)
{
	if (rows != colls)
	{
		return;
	}

	for (int i = 0; i < colls; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			matrixCopy[i][j] = matrix[j][i];
		}
	}
}

int main()
{
	// Задача 1: Напишете функция, която приема матрица NxN и транспонира матрицата.
	// 1 2 3    1 4 7
	// 4 5 6 -> 2 5 8
	// 7 8 9    3 6 9

	int matrix[MAX_SIZE][MAX_SIZE];
	int matrixCopy[MAX_SIZE][MAX_SIZE];
	size_t rows, colls;
	std::cin >> rows >> colls;
	enterMatrix(matrix, rows, colls);
	init(matrixCopy, rows, colls, 0);
	transposeMatrix(matrix, matrixCopy, rows, colls);
	printMatrix(matrixCopy, colls, rows);

	return 0;
}