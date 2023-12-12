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

// initialize identity matrix
void initIdentityMatrix(double matrix[][MAX_SIZE], size_t rows, size_t colls)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colls; j++)
		{
			if (i == j)
			{
				matrix[i][j] = 1;
			}
			else
			{
				matrix[i][j] = 0;
			}
		}
	}
}

// print the matrix
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

// calculate 2 x 2 matrix
int calculateSubmatrix(double matrix[][MAX_SIZE])
{
	return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}

void calculate(double tempMatrix[][MAX_SIZE], double matrix[][MAX_SIZE], size_t rows, size_t colls, int &currentColl)
{
	int subi = 0;
	for (int i = 1; i < rows; i++)
	{
		int subj = 0;
		for (int j = 0; j < colls; j++)
		{
			if (j == currentColl)
			{
				continue;
			}
			tempMatrix[subi][subj++] = matrix[i][j];
		}
		subi++;
	}
}

void divideBy(double arr1[], double arr2[], size_t size, double by) 
{
	for (int i = 0; i < size; i++)
	{
		arr1[i] /= by;
		arr2[i] /= by;
	}
}

void substract(double first[], double second[], double coef, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		first[i] -= (second[i] * coef);
	}
}

void makeAllZeros(double matrix[][MAX_SIZE], double result[][MAX_SIZE], size_t rows, size_t colls, int currentRow)
{
	for (int i = 0; i < rows; i++)
	{
		double currValue = matrix[i][currentRow]; // coef
		if (i == currentRow)
		{
			continue;
		}
		// subtract for both matrices
		substract(matrix[i], matrix[currentRow], currValue, colls);
		substract(result[i], result[currentRow], currValue, colls);
	}
}

// calculate determinant
int calculateDeterminant(double matrix[][MAX_SIZE], size_t rows, size_t colls, int currentColl)
{
	if (rows == 1)
	{
		return matrix[0][0];
	}

	if (rows == 2) // 2 x 2
	{
		return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
	}

	int determinantResult = 0;
	double tempMatrix[MAX_SIZE][MAX_SIZE]; // helper matrix for storing the submatrix
	for (int start = 0; start < rows; start++)
	{
		calculate(tempMatrix, matrix, rows, colls, currentColl);
		currentColl++;
		int sign = (start % 2 == 0) ? 1 : -1; // + or -
		determinantResult += sign * matrix[0][start] * calculateSubmatrix(tempMatrix);
	}

	return determinantResult;
}

// to check if matrix is invertable or not
bool isInvertable(double matrix[][MAX_SIZE], size_t rows, size_t colls)
{
	return calculateDeterminant(matrix, rows, colls, 0) != 0;
}

// inverse matrix
void inverseMatrix(double matrix[][MAX_SIZE], double result[][MAX_SIZE], size_t rows, size_t colls)
{
	for (int i = 0; i < rows; i++)
	{
		divideBy(matrix[i], result[i], rows, matrix[i][i]);
		makeAllZeros(matrix, result, rows, colls, i);
	}
}

// if it's invertable print the inverse matrix, and if it's not print message
void print(double matrix[MAX_SIZE][MAX_SIZE], double result[MAX_SIZE][MAX_SIZE], size_t rows, size_t colls)
{
	if (isInvertable(matrix, rows, colls)) // if the matrix is invertable then it has inverse matrix
	{
		inverseMatrix(matrix, result, rows, colls);
		std::cout << "Inverse matrix is: " << std::endl;
		printMatrix(result, rows, colls);
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Matrix does have an inverse matrix!" << std::endl;
		return;
	}
}

int main()
{
	// Задача 4: Напишете функция, която приема матрица NxN и връща обратната матрица(ако дадената е обратима).Ако матрицата не
	// е обратима, да се отпечата подходящо съобщение.
	
	// Identity matrix
	// 1 0 0
	// 0 1 0
	// 0 0 1

	double matrix[MAX_SIZE][MAX_SIZE];
	double result[MAX_SIZE][MAX_SIZE]; // identity matrix
	size_t rows, colls;
	std::cin >> rows >> colls;
	// initialize result
	initIdentityMatrix(result, rows, colls);
	enterMatrix(matrix, rows, colls);
	std::cout << std::endl;

	print(matrix, result, rows, colls);

	return 0;
}