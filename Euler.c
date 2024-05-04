#include <stdio.h>
#include <math.h>

#include "Euler.h"
#include "functions.h"


unsigned long long Problem_2(const unsigned int value_)
{
	unsigned long long sum = 0;
	unsigned int fib_1 = 1;
	unsigned int fib_2 = 2;
	

	while (fib_2 < value_)
	{
		if (fib_2 % 2 == 0)
		{
			sum += fib_2;
		}
		unsigned int prom = fib_1;
		fib_1 = fib_2;
		fib_2 = fib_1 + prom;
	}
	return sum;
}



unsigned long long Problem_3(const unsigned long long int value_)
{
	unsigned long long del_ = 1;
	unsigned long long delmax_ = 0;

	while (del_ < value_)
	{
		if (value_ % del_ == 0)
		{
			if ((Prime(del_)) == 1)
			{
				delmax_ = del_;
				
			}
		}

		del_ += 1;
	}
	return delmax_;
}


int Problem_1(const int value_, const int a, const int b)
{
	int sum = 0;
	int n1 = 1;
	while (n1 < value_)
	{
		if (n1 % a == 0 || n1 % b == 0)
		{
			sum += n1;
		}
		n1 += 1;
	}
	return sum;
}

long long int Problem_4()
{
	int maxPalindrome = 0;
	for (int i = 100; i <= 999; i++)
	{
		for (int j = 100; j <= 999; j++)
		{
			int product = i * j; if (isPalindrome(product) && product > maxPalindrome)
			{
				maxPalindrome = product;
			}
		}
	}
	return maxPalindrome;
}

long long int Problem_5()
{
	long long result = 1;
	for (int i = 1; i <= 20; i++)
	{
		result = lcm(result, i);
	}
	return result;
}

long long int Problem_6(j_)
{
	long long int result_ = SquareSum(j_) - SumSquare(j_);

	return result_;
}

long int Problem_7(j_)
{
	long int i = 0;
	int counter_ = 0;
	while (counter_ != j_)
	{
		i += 1;
		if (Prime(i) == 1)
		{
			counter_ += 1;
		}
	}

	return i;
}

long long int Problem_10(j_)
{
	int i = 0;
	long long int sum = 0;
	while (i < j_)
	{
		i += 1;
		if (Prime(i) == 1)
		{
			sum += i;
		}
	}

	return sum;
}