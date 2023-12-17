#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#include "functions.h"
#include "BullsAndCows.h"

int BullsAndCows()
{
	// ��������� ���������� ��������� �����
	srand(time(NULL));

	// ��������� ���������� ��������������� �����
	int secretNumber = generate_random_number(1000, 10000);
	int x = secretNumber;
	printf("%d\n", secretNumber);

	int guess;
	int bulls, cows;

	printf("����� ���������� � ���� '���� � ������'!\n");
	printf("���������� ������� �������������� �����:\n");

	do
	{
		// ������ ��������������� �����
		printf("������� ���� �������: ");
		scanf_s("%d", &guess);

		if (guess < 1000 || guess > 9999)
		{
			printf("����������, ������� �������������� �����:\n");
			continue;
		}

		count_bulls_and_cows(secretNumber, guess, &bulls, &cows);

		// ����� ����������
		printf("%d ����� � %d �����\n", bulls, cows);
	} 
	while (bulls != 4);

	printf("�����������! �� ������� ����� %d!\n", x);

	return 0;
}