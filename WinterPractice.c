#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "WinterPractice.h"



double** createMemoryMatrix(int rows, int cols)
{
    double** matrix = (double**)malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (double*)malloc(cols * sizeof(double));
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



double** createIdentity(int size)
{
    double** identity = createMemoryMatrix(size, size);
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
    double** tempMatrix = createMemoryMatrix(size, size);
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            tempMatrix[i][j] = matrix[i][j];
        }
    }

    return tempMatrix;
}



void TriangularForm(double** matrix, int size, double** identity)
{
    for (int i = 0; i < size; i++)
    {
        // Поиск главного элемента
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

        // Обмен строками
        for (int k = 0; k < size; k++)
        {
            double temp = matrix[i][k];
            matrix[i][k] = matrix[maxIndex][k];
            matrix[maxIndex][k] = temp;

            temp = identity[i][k];
            identity[i][k] = identity[maxIndex][k];
            identity[maxIndex][k] = temp;
        }

        // Деление строки на главный элемент
        double pivot = matrix[i][i];
        for (int k = 0; k < size; k++)
        {
            matrix[i][k] /= pivot;
            identity[i][k] /= pivot;
        }

        // Обнуление элементов под главным элементом
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
    double** identity = createIdentity(size);

    double** tempMatrix = copyMatrix(matrix, size);

    TriangularForm(tempMatrix, size, identity);

    ReverseMethod(tempMatrix, size, identity);

    freeMatrix(tempMatrix, size);

    return identity;
}



int printInverseMatrix()
{
    int size;

    // Ввод размера матрицы
    printf("Введите размер матрицы: ");
    if (scanf_s("%d", &size) != 1 || size <= 0) 
    {
        printf("Некорректный ввод размера матрицы.\n");
        return 1;
    }

    // Выделение памяти под матрицу
    double** matrix = createMemoryMatrix(size, size);

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

    return 0;
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
    else {
        double det = 0.0;
        for (int i = 0; i < size; i++) 
        {
            double** submatrix = createMemoryMatrix(size - 1, size - 1);
            for (int j = 1; j < size; j++) 
            {
                for (int k = 0, l = 0; k < size; k++) 
                {
                    if (k != i) {
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
    double** tempMatrix = createMemoryMatrix(size, size);

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


int printSolveSystem()
{
    int size;

    // Ввод размера системы
    printf("Введите размер системы линейных уравнений: ");
    if (scanf_s("%d", &size) != 1 || size <= 0) 
    {
        printf("Некорректный ввод размера системы.\n");
        return 1;
    }

    // Выделение памяти под матрицу коэффициентов и вектор свободных членов
    double** coefficients = createMemoryMatrix(size, size);
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

    return 0;
}