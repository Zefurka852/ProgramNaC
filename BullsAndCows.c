#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#include "functions.h"
#include "BullsAndCows.h"

int BullsAndCows()
{
	// Настройка генератора случайных чисел
	srand(time(NULL));

	// Генерация случайного четырехзначного числа
	int secretNumber = generate_random_number(1000, 10000);
	int x = secretNumber;
	printf("%d\n", secretNumber);

	int guess;
	int bulls, cows;

	printf("Добро пожаловать в игру 'Быки и коровы'!\n");
	printf("Попробуйте угадать четырехзначное число:\n");

	do
	{
		// Запрос предполагаемого числа
		printf("Введите вашу догадку: ");
		scanf_s("%d", &guess);

		if (guess < 1000 || guess > 9999)
		{
			printf("Пожалуйста, введите четырехзначное число:\n");
			continue;
		}

		count_bulls_and_cows(secretNumber, guess, &bulls, &cows);

		// Вывод результата
		printf("%d быков и %d коров\n", bulls, cows);
	} 
	while (bulls != 4);

	printf("Поздравляем! Вы угадали число %d!\n", x);

	return 0;
}