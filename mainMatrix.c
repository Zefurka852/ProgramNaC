#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#include "functions.h"
#include "Euler.h"
#include "str.h"
#include "Matrix.h"


int main()
{
	setlocale(LC_ALL, "Russian");


	// Задание 1 из Зимней практики
	
	int rows;
	int cols;

	// Ввод размера системы
	printf("Введите колличество строк матрицы: ");
	if (scanf_s("%d", &rows) != 1 || rows <= 0)
	{
		printf("Некорректный ввод размера матрицы.\n");
		return 1;
	}

	printf("Введите колличество столбцов матрицы: ");
	if (scanf_s("%d", &cols) != 1 || cols <= 0)
	{
		printf("Некорректный ввод размера матрицы.\n");
		return 1;
	}

	if (rows != cols)
	{
		printf("Матрица не квадратная, невозможно вычислить обратную матрицу.\n");
		return 1;
	}

	int size = rows;

	// Выделение памяти под матрицу
	double** matrix = allocateMemoryForMatrix(size, size);

	// Ввод матрицы
	printf("Введите элементы матрицы:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("Элемент [%d][%d]: ", i + 1, j + 1);
			if (scanf_s("%lf", &matrix[i][j]) != 1)
			{
				printf("Некорректный ввод элемента матрицы.\n");
				freeMatrix(matrix, size);
				return 1;
			}
		}
	}

	// Вычисление обратной матрицы
	double** inverse = inverseMatrix(matrix, size);

	// Вывод результатов
	printf("\nИсходная матрица:\n");
	printMatrix(matrix, size);

	printf("\nОбратная матрица:\n");
	printMatrix(inverse, size);

	// Освобождение памяти
	freeMatrix(matrix, size);
	freeMatrix(inverse, size);
	
	


	// Задание 2 из Зимней практики

	/*
	int rows;
	int cols;

	// Ввод размера системы
	printf("Введите колличество строк системы линейных уравнений: ");
	if (scanf_s("%d", &rows) != 1 || rows <= 0)
	{
		printf("Некорректный ввод размера системы.\n");
		return 1;
	}

	printf("Введите колличество неизвестных системы линейных уравнений: ");
	if (scanf_s("%d", &cols) != 1 || cols <= 0)
	{
		printf("Некорректный ввод размера системы.\n");
		return 1;
	}

	if (rows != cols)
	{
		printf("Размер системы неккоректный, невозможно вычислить решение системы методом Крамера.\n");
		return 1;
	}

	int size = rows;

	// Выделение памяти под матрицу коэффициентов и вектор свободных членов
	double** coefficients = allocateMemoryForMatrix(size, size);
	double* constants = (double*)malloc(size * sizeof(double));

	// Ввод системы линейных уравнений
	printf("Введите систему линейных уравнений (коэффициенты и свободные члены):\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("Коэффициент x[%d][%d]: ", i + 1, j + 1);
			if (scanf_s("%lf", &coefficients[i][j]) != 1)
			{
				printf("Некорректный ввод коэффициента.\n");
				return 1;
			}
		}
		printf("Свободный член b[%d]: ", i + 1);
		if (scanf_s("%lf", &constants[i]) != 1)
		{
			printf("Некорректный ввод свободного члена.\n");
			return 1;
		}
	}

	// Решение системы методом Крамера
	solveSystem(coefficients, constants, size);

	// Освобождение памяти
	freeMatrix(coefficients, size);
	free(constants);
	*/

	return 0;
}
