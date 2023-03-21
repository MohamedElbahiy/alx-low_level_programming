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
	long k;
	int x;

	for (x = 0; x < 50; x++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k == 1)
		{
			printf("%ld", k);
		}
		else
		{
			printf(", %ld", k);
		}
	}
	printf("\n");
	return (0);
}
