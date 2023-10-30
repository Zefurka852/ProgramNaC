#include <stdio.h>
#include <locale.h>

#include "functions.h"
#include "Euler.h"


int main()
{
	/*
	unsigned int value = 4000000;
	printf("%llu\n", Problem_2(value));
	*/

	/*
	unsigned long long int value = 600851475143;
	//600851475143
	printf("%llu\n", Problem_3(value));
	*/

	/*
	int value = 1000;
	printf("%d\n", Problem_1(value));
	*/

	/*
	printf("%d\n", Problem_4());
	*/

	/*
	printf("%lld\n", Problem_5());
	*/
//	return 0;

	setlocale(LC_ALL, "Rus");
	BullsAndCows();
}