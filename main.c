#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "functions.h"
#include "Euler.h"
#include "DopZadaniya.h"
#include "BullsAndCows.h"
#include "str.h"
#include "modul2.h"
#include "Matrix.h"


int main()
{
	setlocale(LC_ALL, "Russian");


	// Проект Эйлера, задача 1

	/*
	int value_ = 1000;
	int del1_ = 3;
	int del2_ = 5;
	printf("%d\n", Problem_1(value_, del1_, del2_));
	*/




	// Проект Эйлера, задача 2

	/*
	unsigned int limit_ = 4000000;
	printf("%llu\n", Problem_2(limit_));
	*/




	// Проект Эйлера, задача 3

	/*
	unsigned long long int value = 600851475143;
	//600851475143
	printf("%llu\n", Problem_3(value));
	*/




	// Проект Эйлера, задача 4

	/*
	printf("%d\n", Problem_4());
	*/




	// Проект Эйлера, задача 5

	/*
	printf("%lld\n", Problem_5());
	*/




	// Быки и коровы

	/*
	BullsAndCows();
	*/




	// Доп задание за теорию 1 модуль Euler function

	/*
	//Euler function
	int value_;

	printf("Введите натуральное число value_: ");
	scanf_s("%d", &value_);

	if (value_ <= 0) {
		printf("Введите положительное натуральное число.\n");
		return 1;
	}

	int result = euler_function(value_);
	printf("f(%d) = %d\n", value_, result);
	*/



	// Доп задание за практику 1 модуль (Row Teylor)

	/*
	double x;
	int precision;

	printf("Введите значение x для экспоненты: ");
	scanf_s("%lf", &x);

	printf("Введите точность (количество членов ряда Тейлора): ");
	scanf_s("%d", &precision);

	double exp_result = exp_taylor(x, precision);
	double actual_exp = exp(x);  // Для сравнения с библиотечной функцией exp()

	printf("Результат ряда Тейлора для exp(%lf) с точностью %d: %lf\n", x, precision, exp_result);
	printf("Фактическое значение exp(%lf): %lf\n", x, actual_exp);
	*/



	//my_strcat my_strlen

	/*
	char* str = "Admslk dlsj";
	printf("%d\n", my_strlen(str));
	*/



	//my_strcpy

	/*
	char src[] = "Dlkjfqij";
	char dst[30];
	printf("%s\n", my_strcpy(dst, src));
	*/



	//my_strcat

	/*
	char src[] = "Dlkjfqij";
	char dst[] = "AKJdgh l";
	printf("%s\n", my_strcat(dst, src));
	*/



	// my_strcmp

	/*
	char* str1 = "ABCDEF";
	char* str2 = "ABCDE";
	printf("%d\n", my_strcmp(str1, str2));
	*/



	// my_strstr

	/*
	const char* str1_ = "Today there will be a festival in our city.";
	const char* str2_ = "festival";

	char* result = my_strstr(str1_, str2_);

	if (result != NULL) {
		printf("Подстрока найдена: %s\n", result);
	}
	else {
		printf("Подстрока не найдена.\n");
	}
	*/



	// fgetline

	/*
	FILE* file;
	if (fopen_s(&file, "text.txt", "r") != 0) 
	{
		perror("Не удалось открыть файл");
		return 1;
	}

	char* line;

	while ((line = fgetline(file)) != NULL) 
	{
		printf("%s", line);
		free(line);
	}

	fclose(file);
	*/



	// Задание 1 из модуля 2

	/*
	char input_string[100];

	printf("Введите строку: ");
	fgets(input_string, sizeof(input_string), stdin);

	// Убираем символ новой строки, если он есть
	size_t len = my_strlen(input_string);
	if (len > 0 && input_string[len - 1] == '\n') 
	{
		input_string[len - 1] = '\0';
	}

	shift_characters(input_string);

	printf("Измененная строка: %s\n", input_string);
	*/
	


	// Задание 2 из модуля 2

	/*
	FILE *file;
    if (fopen_s(&file, "cars.txt", "r") != 0) 
	{
        perror("Не удалось открыть файл");
        return 1;
    }

    int num_cars;
    if (fscanf_s(file, "%d", &num_cars) != 1) 
	{
        perror("Не удалось считать количество машин");
        fclose(file);
        return 1;
    }

    struct Car *cars = malloc(num_cars * sizeof(struct Car));
    if (cars == NULL) 
	{
        perror("Не удалось выделить память для массива структур");
        fclose(file);
        return 1;
    }

    for (int i = 0; i < num_cars; ++i) 
	{
        if (fscanf_s(file, "%49s %49s %49s %d %19s",
                     cars[i].brand,
                     _countof(cars[i].brand),
                     cars[i].manufacturer,
                     _countof(cars[i].manufacturer),
                     cars[i].type,
                     _countof(cars[i].type),
                     &cars[i].year_of_manufacture,
                     cars[i].registration_date,
                     _countof(cars[i].registration_date)) != 5) 
		{
            perror("Не удалось считать данные машины");
            free(cars);
            fclose(file);
            return 1;
        }
    }

    fclose(file);

    print_cars_info(cars, num_cars);

    free(cars); // Освобождение выделенной динамической памяти
	*/
	


	// Задание 1 из Зимней практики

	
	/*
	int rows;
	int cols;

	// Ввод размера матрицы
	printf("Введите количество сток матрицы: ");
	if (scanf_s("%d", &rows) != 1 || rows <= 0)
	{
		printf("Некорректный ввод размера матрицы.\n");
		return 1;
	}

	printf("Введите количество столбцов матрицы: ");
	if (scanf_s("%d", &cols) != 1 || cols <= 0)
	{
		printf("Некорректный ввод размера матрицы.\n");
		return 1;
	}

	if (rows != cols)
	{
		printf("Матрица не квадратная, невозможно найти обратную матрицу.\n");
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
	*/


	// Задание 2 из Зимней практики

	/*
	int rows;
	int cols;

	// Ввод размера системы
	printf("Введите количество сток системы линейных уравнений: ");
	if (scanf_s("%d", &rows) != 1 || rows <= 0)
	{
		printf("Некорректный ввод размера системы.\n");
		return 1;
	}

	printf("Введите количество переменных системы линейных уравнений: ");
	if (scanf_s("%d", &cols) != 1 || cols <= 0)
	{
		printf("Некорректный ввод размера системы.\n");
		return 1;
	}

	if (rows != cols)
	{
		printf("Некорректный размер системы линейных уравнений, невозможно найти решение методом Крамера.\n");
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
