#include <stdio.h>
#include <math.h>

/**
 * largest_pr_f - check the code
 *
 * @n: parameter
 *
 * Return: Always nothing.
 */

void largest_pr_f(long int n)
{
	int pn;
	int lg;

	while (n % 2 == 0)
	{
		n = n / 2;
	}
	for (pn = 3; pn <= sqrt(n); pn += 2)
	{
		while (n % pn == 0)
		{
			n = n / pn;
			lg = pn;
		}
	}
	if (n > 2)
	{
		lg = n;
		printf("%d\n", lg);
	}
}
