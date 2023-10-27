#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");
	BullsAndCows();
}

int BullsAndCows() {
	// ��������� ���������� ��������� �����
	srand(time(NULL));

	// ��������� ���������� ��������������� �����
	int secretNumber = 1000 + rand() % 9000;

	int guess, bulls, cows;
	bulls = cows = 0;

	printf("����� ���������� � ���� '���� � ������'!\n");
	printf("���������� ������� �������������� �����.\n");

	while (bulls != 4) {
		// ������ ��������������� �����
		printf("������� ���� �������: ");
		scanf_s("%d", &guess);

		if (guess < 1000 || guess > 9999) {
			printf("����������, ������� �������������� �����.\n");
			continue;
		}

		// ��������� ����� �� ��������� �����
		int secretDigits[4], guessDigits[4];

		for (int i = 3; i >= 0; i--) {
			secretDigits[i] = secretNumber % 10;
			guessDigits[i] = guess % 10;
			secretNumber /= 10;
			guess /= 10;
		}

		// ������� ����� � �����
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

		// ����� ����������
		printf("%d ����� � %d �����\n", bulls, cows);
	}

	printf("�����������! �� ������� ����� %d!\n", secretNumber);

	return 0;
}
