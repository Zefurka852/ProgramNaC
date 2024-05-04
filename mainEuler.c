#include <stdio.h>
#include <locale.h>

#include "functions.h"
#include "Euler.h"

int main() 
{
	setlocale(LC_ALL, "Russian");

	// Задача 6
	/*
	int y = 0;
	printf("Введите колличество натуральных чисел: ");
	scanf_s("%d", &y);

	if (y < 0)
	{
		printf("Введите положительное колличество натуральных чисел: ");
		scanf_s("%d", &y);
	}
 
	printf("%llu\n", Problem_6(y));
	*/


	// Задача 7
	/*
	int x = 0;
	printf("Введите номер простого числа: ");
	scanf_s("%d", &x);

	if (x < 1)
	{
		printf("Некорректный номер числа!\nВведите номер ещё раз: ");
		scanf_s("%d", &x);
	}

	printf("%lu\n", Problem_7(x));
	*/

	// Задача 10
	int x = 0;
	printf("Введите число: ");
	scanf_s("%d", &x);

	if (x < 0)
	{
		printf("Введите положительное число: ");
		scanf_s("%d", &x);
	}

	printf("%llu", Problem_10(x));
	return 0;
}