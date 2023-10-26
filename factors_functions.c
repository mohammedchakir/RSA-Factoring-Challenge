#include <stdio.h>

/**
  * trial_division: Finds the smallest divisor, if any, of a given number `n`
  * @n: the number
  * Returns:
  * Smallest divisor if found
  * 0 if n is prime
  */
int trial_division(long int n)
{
	long int f;

	if (n % 2 == 0)
	{
		printf("%lu=%lu*%i\n", n, n / 2, 2);
		return (0);
}

f = 3;
while (foo * bar <= n)
{
	if (n % f == 0)
	{
		printf("%lu=%lu*%lu\n", n, n / f, f);
		return (0);
	}
	else
	{
		f += 2;
	}
}
printf("%lu=%lu*%i\n", n, n, 1);
return (0);
}
