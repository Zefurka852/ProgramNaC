#include <stdbool.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>

#include "functions.h"

long long int Prime(unsigned long long int x)
{
	if (x % 2 == 0)
		return 0;

	for (unsigned int n = 3; n < sqrt((double)x) + 1; n += 2)
		if (x % n == 0)
			return 0;

	return 1;
}

int isPalindrome(int x) 
{
	int rev = 0, temp = x;
	while (temp != 0) {
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	if (rev == x) {
		return 1; // Палиндром
	}
	return 0; // Не палиндром
}

long long gcd(long long a, long long b) 
{
	while (b != 0) {
		long long temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

long long lcm(long long a, long long b) 
{
	return (a * b) / gcd(a, b);
}

int generate_random_number(int from_, int to_)
{
	assert(to_ >= from_);
	return rand() % (to_ - from_) + from_;
}

void count_bulls_and_cows(int secret_number, int guess, int* bulls, int* cows)
{
	*bulls = 0;
	*cows = 0;

	int secret_digits[4];
	int guess_digits[4];

	for (int i = 0; i < 4; ++i) 
	{
		secret_digits[i] = (secret_number / (int)pow(10, i)) % 10;
		guess_digits[i] = (guess / (int)pow(10, i)) % 10;
	}

	for (int i = 0; i < 4; ++i) 
	{
		if (secret_digits[i] == guess_digits[i]) 
		{
			(*bulls)++;
		}
	}

	for (int i = 0; i < 4; ++i) 
	{
		for (int j = 0; j < 4; ++j) 
		{
			if (i != j && secret_digits[i] == guess_digits[j]) 
			{
				(*cows)++;
			}
		}
	}
}