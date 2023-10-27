#include "functions.h"
#include <stdbool.h>
#include <math.h>

long long int Prime(unsigned long long int x)
{
	if (x % 2 == 0)
		return 0;

	for (unsigned int n = 3; n < sqrt((double)x) + 1; n += 2)
		if (x % n == 0)
			return 0;

	return 1;
}

int isPalindrome(int x) {
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

long long gcd(long long a, long long b) {
	while (b != 0) {
		long long temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

long long lcm(long long a, long long b) {
	return (a * b) / gcd(a, b);
}
