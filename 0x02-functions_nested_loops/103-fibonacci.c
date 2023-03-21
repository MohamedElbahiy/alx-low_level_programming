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

	while (k < 4000000)
	{
		k = i + j;
		i = j;
		j = k;
	}
	printf("%ld\n", i);
	return (0);
}
