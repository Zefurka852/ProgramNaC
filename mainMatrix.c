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


	// ������� 1 �� ������ ��������
	
	int rows;
	int cols;

	// ���� ������� �������
	printf("������� ����������� ����� �������: ");
	if (scanf_s("%d", &rows) != 1 || rows <= 0)
	{
		printf("������������ ���� ������� �������.\n");
		return 1;
	}

	printf("������� ����������� �������� �������: ");
	if (scanf_s("%d", &cols) != 1 || cols <= 0)
	{
		printf("������������ ���� ������� �������.\n");
		return 1;
	}

	if (rows != cols)
	{
		printf("������� �� ����������, ���������� ��������� �������� �������.\n");
		return 1;
	}

	int size = rows;

	// ��������� ������ ��� �������
	double** matrix = allocateMemoryForMatrix(size, size);

	// ���� �������
	printf("������� �������� �������:\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("������� [%d][%d]: ", i + 1, j + 1);
			if (scanf_s("%lf", &matrix[i][j]) != 1)
			{
				printf("������������ ���� �������� �������.\n");
				freeMatrix(matrix, size);
				return 1;
			}
		}
	}

	// ���������� �������� �������
	double** inverse = inverseMatrix(matrix, size);

	// ����� �����������
	printf("\n�������� �������:\n");
	printMatrix(matrix, size);

	printf("\n�������� �������:\n");
	printMatrix(inverse, size);

	// ������������ ������
	freeMatrix(matrix, size);
	freeMatrix(inverse, size);
	
	


	// ������� 2 �� ������ ��������

	/*
	int rows;
	int cols;

	// ���� ������� �������
	printf("������� ����������� ����� ������� �������� ���������: ");
	if (scanf_s("%d", &rows) != 1 || rows <= 0)
	{
		printf("������������ ���� ������� �������.\n");
		return 1;
	}

	printf("������� ����������� ����������� ������� �������� ���������: ");
	if (scanf_s("%d", &cols) != 1 || cols <= 0)
	{
		printf("������������ ���� ������� �������.\n");
		return 1;
	}

	if (rows != cols)
	{
		printf("������ ������� ������������, ���������� ��������� ������� ������� ������� �������.\n");
		return 1;
	}

	int size = rows;

	// ��������� ������ ��� ������� ������������� � ������ ��������� ������
	double** coefficients = allocateMemoryForMatrix(size, size);
	double* constants = (double*)malloc(size * sizeof(double));

	// ���� ������� �������� ���������
	printf("������� ������� �������� ��������� (������������ � ��������� �����):\n");
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("����������� x[%d][%d]: ", i + 1, j + 1);
			if (scanf_s("%lf", &coefficients[i][j]) != 1)
			{
				printf("������������ ���� ������������.\n");
				return 1;
			}
		}
		printf("��������� ���� b[%d]: ", i + 1);
		if (scanf_s("%lf", &constants[i]) != 1)
		{
			printf("������������ ���� ���������� �����.\n");
			return 1;
		}
	}

	// ������� ������� ������� �������
	solveSystem(coefficients, constants, size);

	// ������������ ������
	freeMatrix(coefficients, size);
	free(constants);
	*/

	return 0;
}
