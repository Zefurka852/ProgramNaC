#include "functions.h"
#include <stdbool.h>
#include <math.h>

int Prime(unsigned long long int x)
{
	if (x > 1)
	{
		for (long long int i = 2; i <= sqrt(x); i++)
			if (x % i == 0)
				return 0;
		return 1;
	}
	else
		return 0;
}

int isPalindrome(int x) {
	int rev = 0, temp = x;
	while (temp != 0) {
		rev = rev * 10 + temp % 10;
		temp /= 10;
	}
	if (rev == x) {
		return 1; // Ïàëèíäðîì
	}
	return 0; // Íå ïàëèíäðîì
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

long long int Square(long long a_)
{
	long long int b_ = a_ * a_;

	return b_;
}

long long int SumSquare(int j_)
{
	long long int sum_ = 0;
	int i_ = 1;
	while (i_ <= j_)
	{
		int n1 = Square(i_);
		sum_ += n1;
		i_ += 1;
	}

	return sum_;
}

long long int SquareSum(int j_)
{
	long long int square_ = 0;
	long long int sum_ = 0;
	int i_ = 1;
	while (i_ <= j_)
	{
		sum_ += i_;
		i_ += 1;
	}
	square_ = Square(sum_);

	return square_;
}