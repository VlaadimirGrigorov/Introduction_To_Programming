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

void multiply(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int newMatrix[][MAX_SIZE], size_t rows1, size_t colls1, size_t rows2, size_t colls2, int currRow, int currColl)
{
	for (int k = 0; k < colls2; k++)
	{
		newMatrix[currRow][currColl] += matrix1[currRow][k] * matrix2[k][currColl]; // if I had newMatrix[i][j] = ... than it wouldn't be correct
	}
}

void multiplyMatrices(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int newMatrix[][MAX_SIZE], size_t rows1, size_t colls1, size_t rows2, size_t colls2)
{
	// (NxM) * (MxK) = NxK
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < colls2; j++)
		{
			multiply(matrix1, matrix2, newMatrix, rows1, colls1, rows2, colls2, i, j);
		}
	}
}

int main()
{
	// Задача 3: Напишете функция, която приема матрица NxM и матрица MxK и умножава първата матрица по втората.

	int matrix1[MAX_SIZE][MAX_SIZE];
	int matrix2[MAX_SIZE][MAX_SIZE];
	int newMatrix[MAX_SIZE][MAX_SIZE];
	size_t rows1, colls1, rows2, colls2;
	std::cin >> rows1 >> colls1;
	enterMatrix(matrix1, rows1, colls1);

	std::cin >> rows2 >> colls2;
	enterMatrix(matrix2, rows2, colls2);
	
	// initialize newMatrix
	init(newMatrix, rows1, colls2, 0);
	
	multiplyMatrices(matrix1, matrix2, newMatrix, rows1, colls1, rows2, colls2);
	printMatrix(newMatrix, rows1, colls2);

	return 0;
}