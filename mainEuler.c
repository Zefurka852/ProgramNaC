#include <stdio.h>
#include <locale.h>

#include "functions.h"
#include "Euler.h"

int main() 
{
	setlocale(LC_ALL, "Russian");

	// ������ 6
	/*
	int y = 0;
	printf("������� ����������� ����������� �����: ");
	scanf_s("%d", &y);

	if (y < 0)
	{
		printf("������� ������������� ����������� ����������� �����: ");
		scanf_s("%d", &y);
	}
 
	printf("%llu\n", Problem_6(y));
	*/


	// ������ 7
	/*
	int x = 0;
	printf("������� ����� �������� �����: ");
	scanf_s("%d", &x);

	if (x < 1)
	{
		printf("������������ ����� �����!\n������� ����� ��� ���: ");
		scanf_s("%d", &x);
	}

	printf("%lu\n", Problem_7(x));
	*/

	// ������ 10
	int x = 0;
	printf("������� �����: ");
	scanf_s("%d", &x);

	if (x < 0)
	{
		printf("������� ������������� �����: ");
		scanf_s("%d", &x);
	}

	printf("%llu", Problem_10(x));
	return 0;
}