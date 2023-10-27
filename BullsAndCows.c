#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");
	BullsAndCows();
}

int BullsAndCows() {
	// Настройка генератора случайных чисел
	srand(time(NULL));

	// Генерация случайного четырехзначного числа
	int secretNumber = 1000 + rand() % 9000;

	int guess, bulls, cows;
	bulls = cows = 0;

	printf("Добро пожаловать в игру 'Быки и коровы'!\n");
	printf("Попробуйте угадать четырехзначное число.\n");

	while (bulls != 4) {
		// Запрос предполагаемого числа
		printf("Введите вашу догадку: ");
		scanf_s("%d", &guess);

		if (guess < 1000 || guess > 9999) {
			printf("Пожалуйста, введите четырехзначное число.\n");
			continue;
		}

		// Разбиение чисел на отдельные цифры
		int secretDigits[4], guessDigits[4];

		for (int i = 3; i >= 0; i--) {
			secretDigits[i] = secretNumber % 10;
			guessDigits[i] = guess % 10;
			secretNumber /= 10;
			guess /= 10;
		}

		// Подсчет быков и коров
		bulls = cows = 0;

		for (int i = 0; i < 4; i++) {
			if (guessDigits[i] == secretDigits[i]) {
				bulls++;
			}
			else {
				for (int j = 0; j < 4; j++) {
					if (i != j && guessDigits[i] == secretDigits[j]) {
						cows++;
					}
				}
			}
		}

		// Вывод результата
		printf("%d быков и %d коров\n", bulls, cows);
	}

	printf("Поздравляем! Вы угадали число %d!\n", secretNumber);

	return 0;
}
