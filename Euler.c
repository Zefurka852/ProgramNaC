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
				printf("%d\n", delmax_);
			}
		}

		del_ += 1;
	}
	return delmax_;
}


int Problem_1(const int value_)
{
	int sum = 0;
	int n1 = 1;
	while (n1 < value_)
	{
		if (n1 % 3 == 0 || n1 % 5 == 0)
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