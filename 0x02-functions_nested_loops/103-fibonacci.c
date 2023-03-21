#include <stdio.h>
/**
 * main - my main
 *
 * Return: return 0
 */
int main(void)
{
	long i = 0;
	long j = 1;
	long k = 0;
	long x = 0;

	while (x < 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0)
		{
			x = x + k;
		}
	}
	printf("%ld\n", x);
	return (0);
}
