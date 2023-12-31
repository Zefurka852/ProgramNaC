#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Matrix.h"



double** allocateMemoryForMatrix(int rows, int cols)
{
    double** matrix = malloc(rows * sizeof(double*));
    if (matrix == NULL)

        return 1;

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = malloc(cols * sizeof(double));
        if (matrix == NULL)

            return 1;
    }
    return matrix;
}



void printMatrix(double** matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%lf\t", matrix[i][j]);
        }
        printf("\n");
    }
}



void freeMatrix(double** matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}



double** createIdentityMatrix(int size)
{
    double** identity = allocateMemoryForMatrix(size, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            identity[i][j] = (i == j) ? 1.0 : 0.0;
        }
    }

    return identity;
}



double** copyMatrix(double** matrix, int size)
{
    double** tempMatrix = allocateMemoryForMatrix(size, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            tempMatrix[i][j] = matrix[i][j];
        }
    }

    return tempMatrix;
}



int searchMainElement(double** matrix, int size, int i)
{
    double maxElement = fabs(matrix[i][i]);
    int maxIndex = i;
    for (int k = i + 1; k < size; k++)
    {
        if (fabs(matrix[k][i]) > maxElement)
        {
            maxElement = fabs(matrix[k][i]);
            maxIndex = k;
        }
    }

    return maxIndex;
}



void swappingRows(double** matrix, int size, double** identity, int i, int maxIndex)
{
    for (int k = 0; k < size; k++)
    {
        double temp = matrix[i][k];
        matrix[i][k] = matrix[maxIndex][k];
        matrix[maxIndex][k] = temp;

        temp = identity[i][k];
        identity[i][k] = identity[maxIndex][k];
        identity[maxIndex][k] = temp;
    }
}



void devidingRowOnMainElement(double** matrix, int size, double** identity, int i)
{
    double pivot = matrix[i][i];
    for (int k = 0; k < size; k++)
    {
        matrix[i][k] /= pivot;
        identity[i][k] /= pivot;
    }
}



void zeroingElementsUnderMainElement(double** matrix, int size, double** identity, int i)
{
    for (int k = i + 1; k < size; k++)
    {
        double factor = matrix[k][i];
        for (int j = 0; j < size; j++)
        {
            matrix[k][j] -= factor * matrix[i][j];
            identity[k][j] -= factor * identity[i][j];
        }
    }
}


void TriangularForm(double** matrix, int size, double** identity)
{
    for (int i = 0; i < size; i++)
    {
        int maxIndex = searchMainElement(matrix, size, i);

        swappingRows(matrix, size, identity, i, maxIndex);

        devidingRowOnMainElement(matrix, size, identity, i);

        zeroingElementsUnderMainElement(matrix, size, identity, i);
    }
}



void ReverseMethod(double** matrix, int size, double** identity)
{
    for (int i = size - 1; i > 0; i--)
    {
        for (int k = i - 1; k >= 0; k--)
        {
            double factor = matrix[k][i];
            for (int j = 0; j < size; j++)
            {
                matrix[k][j] -= factor * matrix[i][j];
                identity[k][j] -= factor * identity[i][j];
            }
        }
    }
}



double** inverseMatrix(double** matrix, int size)
{
    double** identity = createIdentityMatrix(size);

    double** tempMatrix = copyMatrix(matrix, size);

    TriangularForm(tempMatrix, size, identity);

    ReverseMethod(tempMatrix, size, identity);

    freeMatrix(tempMatrix, size);

    return identity;
}




double determinant(double** matrix, int size)
{
    if (size == 1)
    {
        return matrix[0][0];
    }
    else if (size == 2)
    {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    else
    {
        double det = 0.0;
        for (int i = 0; i < size; i++)
        {
            double** submatrix = allocateMemoryForMatrix(size - 1, size - 1);
            for (int j = 1; j < size; j++)
            {
                for (int k = 0, l = 0; k < size; k++)
                {
                    if (k != i)
                    {
                        submatrix[j - 1][l++] = matrix[j][k];
                    }
                }
            }
            det += matrix[0][i] * determinant(submatrix, size - 1) * ((i % 2 == 0) ? 1 : -1);
            freeMatrix(submatrix, size - 1);
        }
        return det;
    }
}



void solveSystem(double** coefficients, double* constants, int size)
{
    // Вычисление определителя матрицы коэффициентов
    double det = determinant(coefficients, size);

    if (det == 0)
    {
        printf("Система уравнений вырожденная, метод Крамера не применим.\n");
        return;
    }

    // Выделение памяти под временную матрицу
    double** tempMatrix = allocateMemoryForMatrix(size, size);

    // Решение системы
    for (int i = 0; i < size; i++)
    {
        // Копирование матрицы коэффициентов
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                tempMatrix[j][k] = coefficients[j][k];
            }
        }

        // Замена i-го столбца на вектор свободных членов
        for (int j = 0; j < size; j++)
        {
            tempMatrix[j][i] = constants[j];
        }

        // Вычисление определителя временной матрицы
        double detTemp = determinant(tempMatrix, size);

        // Решение для i-го неизвестного
        double xi = detTemp / det;

        // Вывод результата
        printf("x%d = %.2lf\n", i + 1, xi);
    }

    // Освобождение памяти
    freeMatrix(tempMatrix, size);
}