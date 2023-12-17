#include <stdio.h>
#include <math.h>

#include "Euler.h"
#include "functions.h"

int Problem_1(const int value_, const int del1_, const int del2_)
{
	int sum = 0;
	int n1 = 1;
	while (n1 < value_)
	{
		if (n1 % del1_ == 0 || n1 % del2_ == 0)
		{
			sum += n1;
		}
		n1 += 1;
	}
	return sum;
}

long long int Problem_2(const int limit_)
{
	long long int sum = 0;
	long long int f1_ = 1, f2_ = 2;

	while (f2_ <= limit_)
	{
		if (f2_ % 2 == 0)
		{
			sum += f2_;
		}

		long long int next_f = f1_ + f2_;
		f1_ = f2_;
		f2_ = next_f;
	}
	return sum;
}

unsigned long long Problem_3(unsigned long long int value_)
{
	unsigned long long del_ = 1;
	unsigned long long delmax_ = 0;

	while (del_ <= value_)
	{
		if (value_ % del_ == 0)
		{
			if ((Prime(del_)) == 1)
			{
				delmax_ = del_;
				value_ = value_ / del_;
			}
		}

		del_ += 1;
	}
	return delmax_;
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